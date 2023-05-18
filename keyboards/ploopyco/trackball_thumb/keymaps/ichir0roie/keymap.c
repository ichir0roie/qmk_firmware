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

// name rule -> 4,5,1,2,Sc,3

# define Bt1 KC_BTN1
# define Bt2 KC_BTN2
# define Bt3 LCTL_T(KC_DEL)
# define Bt4 DRAG_SCROLL
# define Bt5 LT(2,KC_ENTER)
# define BtSc KC_BTN3

const uint16_t PROGMEM keymaps[]
[MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        Bt4,Bt5,Bt1,TO(3),Bt2,Bt3
    ),
    [1] = LAYOUT(
        KC_BTN4,KC_BTN5,KC_BTN1,TO(0),KC_BTN2,KC_BTN3
    ),
    [2] = LAYOUT(
        KC_NO,KC_NO,DPI_CONFIG,KC_NO,LGUI(LCTL(KC_LEFT)),LGUI(LCTL(KC_RIGHT))
    ),
    [3] = LAYOUT(
        KC_BTN4,KC_BTN5,KC_BTN1,TO(0),KC_BTN2,KC_BTN3
    )
};


// name rule -> bt 4,5,1,2,NO,3
const uint16_t PROGMEM cmbKeys12[] = {Bt1, Bt2, COMBO_END};
const uint16_t PROGMEM cmbKeys23[] = {Bt2, Bt3, COMBO_END};
const uint16_t PROGMEM cmbKeys13[] = {Bt1, Bt3, COMBO_END};
const uint16_t PROGMEM cmbKeys45[] = {Bt4, Bt5, COMBO_END};
const uint16_t PROGMEM cmbKeys41[] = {Bt4, Bt1, COMBO_END};
const uint16_t PROGMEM cmbKeys51[] = {Bt5, Bt1, COMBO_END};
const uint16_t PROGMEM cmbKeys52[] = {Bt5, Bt2, COMBO_END};
// const uint16_t PROGMEM test_combo2[] = {KC_C, KC_D, COMBO_END};

enum combos{
    CMB12,
    CMB23,
    CMB13,
    // CMB45,
    // CMB41,
    CMB51,
    // CMB52,
};
combo_t key_combos[COMBO_COUNT] = {
    [CMB12]=COMBO(cmbKeys12, LGUI(KC_TAB)),
    [CMB23]=COMBO(cmbKeys23, KC_BSPC),
    [CMB13]=COMBO(cmbKeys13, KC_ESC),
    // [CMB45]=COMBO(cmbKeys45, KC_BSPC),
    // [CMB41]=COMBO(cmbKeys41, TO(3)),
    [CMB51]=COMBO(cmbKeys51, RESET),
    // [CMB52]=COMBO(cmbKeys52, KC_BSPC),
    // [TO_Game]=COMBO(toGameMode,TO(3)),
    // COMBO(test_combo2, LCTL(KC_Z)), // keycodes with modifiers are possible too!
};

