/* Copyright 2021 Colin Lam (Ploopy Corporation)
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 * Copyright 2019 Sunjun Kim
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// safe range starts at `PLOOPY_SAFE_RANGE` instead.

        //leftUp,leftDown,1,2,3,right

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        MO(1),DRAG_SCROLL,KC_BTN1,MO(2),KC_BTN2,KC_RCTL
    ),
    [1] = LAYOUT(
        KC_TRNS,KC_BSPC,DPI_CONFIG,KC_BTN3,KC_DEL,KC_ENT
    ),
    [2] = LAYOUT(
        KC_LGUI,KC_NO,LGUI(LCTL(KC_LEFT)),KC_TRNS,LGUI(LCTL(KC_RGHT)),LGUI(KC_TAB)
    ),
};





