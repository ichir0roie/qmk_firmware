#!/bin/bash

set -eEuo pipefail

upstream_url="https://github.com/qmk/qmk_firmware.git"
upstream_branch="master"
excluded_pathspec=":!keyboards"
sync_subject_prefix="Apply qmk/qmk_firmware "

this_script="$(realpath "${BASH_SOURCE[0]}")"
qmk_firmware_dir="$(realpath "$(dirname "$this_script")")"
cd "$qmk_firmware_dir"

git_dir="$(git rev-parse --absolute-git-dir)"
commit_message_file="$git_dir/SYNC_UPSTREAM_MSG"

if ! git diff --quiet --ignore-submodules=none || ! git diff --cached --quiet --ignore-submodules=none; then
    echo "Working tree has uncommitted changes. Commit or stash them first." >&2
    exit 1
fi

echo "Fetching $upstream_url $upstream_branch..."
git fetch --no-tags "$upstream_url" "$upstream_branch"
upstream_commit="$(git rev-parse FETCH_HEAD)"

last_synced_commit="$(git log -1 --format=%B --grep="^$sync_subject_prefix" HEAD \
    | sed -n "s|^$sync_subject_prefix[0-9a-f]*\.\.\([0-9a-f]*\).*|\1|p" | head -n 1)"
if [[ -n "$last_synced_commit" ]]; then
    base_commit="$(git rev-parse "$last_synced_commit^{commit}")"
else
    base_commit="$(git merge-base HEAD "$upstream_commit")"
fi

if [[ "$base_commit" == "$upstream_commit" ]]; then
    echo "Already up to date with upstream ($(git rev-parse --short "$upstream_commit"))."
    exit 0
fi

echo "Applying upstream $(git rev-parse --short "$base_commit")..$(git rev-parse --short "$upstream_commit") (excluding keyboards/)..."
apply_succeeded=true
git diff --binary --ignore-submodules=all "$base_commit" "$upstream_commit" -- . "$excluded_pathspec" \
    | git apply --3way --index || apply_succeeded=false

echo "Updating submodules to upstream references..."
git config --blob "$upstream_commit:.gitmodules" --get-regexp '\.path$' | while read -r _ submodule_path; do
    git update-index --add --cacheinfo "160000,$(git rev-parse "$upstream_commit:$submodule_path"),$submodule_path"
done
git submodule sync --recursive
git submodule update --init --recursive

cat > "$commit_message_file" <<EOF
Sync upstream qmk_firmware (excluding keyboards/)

$sync_subject_prefix$base_commit..$upstream_commit except keyboards/,
and update submodules to upstream references.
EOF

if [[ "$apply_succeeded" != true ]]; then
    echo "Conflicts occurred. Resolve them, then run:" >&2
    echo "  git add <resolved files> && git commit -F \"$commit_message_file\"" >&2
    echo "To abort: git reset --hard HEAD && git submodule update --init --recursive" >&2
    exit 1
fi

git commit -F "$commit_message_file"
rm -f "$commit_message_file"
echo "Done."
