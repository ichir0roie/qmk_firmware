#include <keymap_jp.h>
#include <sendstring_jis.h>

const key_override_t to0 = ko_make_basic(MOD_MASK_SHIFT, JP_ASTR, JP_TILD );
const key_override_t to1 = ko_make_basic(MOD_MASK_SHIFT, JP_PLUS, JP_DLR );
const key_override_t to2 = ko_make_basic(MOD_MASK_SHIFT, JP_MINS, JP_PERC );
const key_override_t to3 = ko_make_basic(MOD_MASK_SHIFT, JP_DQUO, JP_CIRC );

const key_override_t to4 = ko_make_basic(MOD_MASK_SHIFT, JP_QUOT, JP_GRV );
const key_override_t to5 = ko_make_basic(MOD_MASK_SHIFT, JP_LPRN, JP_RPRN );
const key_override_t to6 = ko_make_basic(MOD_MASK_SHIFT, JP_LCBR, JP_RCBR );
const key_override_t to7 = ko_make_basic(MOD_MASK_SHIFT, JP_LBRC, JP_RBRC );

// const key_override_t to8 = ko_make_basic(MOD_MASK_SHIFT, JP_BSLS, JP_YEN );

const key_override_t to9 = ko_make_basic(MOD_MASK_SHIFT, JP_EQL, JP_EXLM );
const key_override_t to10 = ko_make_basic(MOD_MASK_SHIFT, JP_SCLN, JP_AMPR );
const key_override_t to11 = ko_make_basic(MOD_MASK_SHIFT, JP_COLN, JP_QUES );
const key_override_t to12 = ko_make_basic(MOD_MASK_SHIFT, JP_SLSH, JP_PIPE );
// const key_override_t to13 = ko_make_basic(MOD_MASK_SHIFT, JP_BSLS, JP_UNDS );


// const key_override_t to = ko_make_basic(MOD_MASK_SHIFT, JP_, JP_ );

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &to0,
    &to1,
    &to2,
    &to3,
    &to4,
    &to5,
    &to6,
    &to7,
    // &to8,
    &to9,
    &to10,
    &to11,
    &to12,
    // &to13,
    // &to,
    NULL  // Null terminate the array of overrides!
};

#include <keymapAG.c>

