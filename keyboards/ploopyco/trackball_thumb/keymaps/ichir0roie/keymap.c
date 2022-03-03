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
# define Bt3 KC_RCTL
# define Bt4 KC_BSPC
# define Bt5 KC_DEL
# define BtSc LGUI(KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        Bt4,Bt5,Bt1,BtSc,Bt2,Bt3
    ),
    [1] = LAYOUT(
        KC_BTN4,KC_BTN5,KC_BTN1,TO(0),KC_BTN2,KC_BTN3
    ),
};


// name rule -> bt 4,5,1,2,NO,3
const uint16_t PROGMEM cmbKeys12[] = {Bt1, Bt2, COMBO_END};
const uint16_t PROGMEM cmbKeys23[] = {Bt2, Bt3, COMBO_END};
const uint16_t PROGMEM cmbKeys13[] = {Bt1, Bt2, COMBO_END};
const uint16_t PROGMEM cmbKeys45[] = {Bt4, Bt5, COMBO_END};
const uint16_t PROGMEM cmbKeys41[] = {Bt4, Bt1, COMBO_END};
const uint16_t PROGMEM cmbKeys51[] = {Bt5, Bt1, COMBO_END};
// const uint16_t PROGMEM test_combo2[] = {KC_C, KC_D, COMBO_END};

enum combos{
    CMB12,
    CMB23,
    //CMB13,
    //CMB45,
    CMB41,
    CMB51,
};

combo_t key_combos[COMBO_COUNT] = {
    [CMB12]=COMBO(cmbKeys12, KC_ENTER),
    [CMB23]=COMBO(cmbKeys23, DRAG_SCROLL),
    //[CMB13]=COMBO(cmbKeys13, ),
    //[CMB45]=COMBO(cmbKeys45, ),
    [CMB41]=COMBO(cmbKeys41, TO(1)),
    [CMB51]=COMBO(cmbKeys51, RESET),
    // [TO_Game]=COMBO(toGameMode,TO(3)),
    // COMBO(test_combo2, LCTL(KC_Z)), // keycodes with modifiers are possible too!
};



