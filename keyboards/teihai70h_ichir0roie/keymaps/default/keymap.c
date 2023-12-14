// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ A │ B │ C │
     * ├───┼───┼───┤
     * │ D │ E │ F │
     * ├───┼───┼───┤
     * │ G │ H │ I │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_1(
KC_ESC,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,
KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,
KC_LCTL,KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,
KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,
KC_NO,KC_GRV,KC_LGUI,KC_LALT,KC_INT5,KC_SPC,KC_SPC,
KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,KC_INT3,
KC_U,KC_I,KC_O,KC_P,KC_LBRC,KC_RBRC,KC_BSPC,
KC_J,KC_K,KC_L,KC_SCLN,KC_QUOT,KC_BSLS,KC_ENT,
KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_INT1,KC_UP,KC_RSFT,
KC_INT4,KC_INT2,KC_RALT,KC_NO,KC_LEFT,KC_DOWN,KC_RGHT
    )
};
