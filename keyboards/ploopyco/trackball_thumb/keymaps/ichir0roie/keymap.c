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
        LGUI(KC_TAB),DRAG_SCROLL,KC_BTN1,TO(1),KC_BTN2,KC_RCTL
    ),
    [1] = LAYOUT(
        KC_BTN4,KC_BTN5,KC_BTN1,TO(0),KC_BTN2,KC_BTN3
    ),
};

enum combos{
    BT12,
    BT1C,
    BT2C,
    BTD1,
};

const uint16_t PROGMEM Bt1AndBt2[] =  {KC_BTN1, KC_BTN2, COMBO_END};
const uint16_t PROGMEM Bt1AndCtrl[] =  {KC_BTN1, KC_RCTL, COMBO_END};
const uint16_t PROGMEM Bt2AndCtrl[] ={KC_BTN2, KC_RCTL, COMBO_END};
const uint16_t PROGMEM BtDragAndBt1[] ={DRAG_SCROLL, KC_BTN1, COMBO_END};
// const uint16_t PROGMEM test_combo2[] = {KC_C, KC_D, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    [BT12]=COMBO(Bt1AndBt2,KC_DEL),//TO(3)),
    [BT1C]=COMBO(Bt1AndCtrl, KC_BSPC),//OSL(2)),
    [BT2C]=COMBO(Bt2AndCtrl, KC_ENTER),//DPI_CONFIG),
    [BTD1]=COMBO(BtDragAndBt1, RESET),
    // [TO_Game]=COMBO(toGameMode,TO(3)),
    // COMBO(test_combo2, LCTL(KC_Z)), // keycodes with modifiers are possible too!
};



