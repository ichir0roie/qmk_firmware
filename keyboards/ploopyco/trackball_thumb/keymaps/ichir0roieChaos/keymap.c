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
        MO(1),DRAG_SCROLL,KC_BTN1,KC_NO,KC_BTN2,KC_RCTL
    ),
    [1] = LAYOUT(
        KC_TRNS,KC_BSPC,KC_ESC,KC_BTN3,KC_DEL,KC_ENT
    ),
    [2] = LAYOUT(
        LGUI(KC_LEFT),LGUI(KC_RGHT),LGUI(LCTL(KC_LEFT)),KC_NO,LGUI(LCTL(KC_RGHT)),LGUI(KC_TAB)
    ),
    [3] = LAYOUT(
        LGUI(KC_UP),LGUI(KC_DOWN),KC_ESC,TO(0),LGUI(KC_LEFT),LGUI(KC_RGHT)
    ),
    [4] = LAYOUT(
        KC_BTN4,KC_BTN5,KC_BTN1,TO(0),KC_BTN2,KC_BTN3
    ),
};

enum combos{
    DPI_FASTER,
    TO_MO2,
    TO_TO3,
    TO_Game,
};

const uint16_t PROGMEM dpiFaster[] ={KC_BTN2, KC_RCTL, COMBO_END};
const uint16_t PROGMEM toMo2[] =  {KC_BTN1, KC_BTN2, COMBO_END};
const uint16_t PROGMEM toTo3[] =  {KC_BTN1, KC_RCTL, COMBO_END};
const uint16_t PROGMEM toGameMode[] =  {KC_BTN1, KC_BTN2,DRAG_SCROLL, COMBO_END};
// const uint16_t PROGMEM test_combo2[] = {KC_C, KC_D, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    [DPI_FASTER]=COMBO(dpiFaster, DPI_CONFIG),
    [TO_MO2]=COMBO(toMo2, OSL(2)),
    [TO_TO3]=COMBO(toTo3,TO(3)),
    [TO_Game]=COMBO(toGameMode,TO(4)),
    // COMBO(test_combo2, LCTL(KC_Z)), // keycodes with modifiers are possible too!
};



