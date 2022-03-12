// Copyright 2022 ichir0roieHome (@ichir0roieHome)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "joystick.h"


// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE=0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_A,KC_B,KC_C,
        KC_D,KC_E,KC_F,
        KC_G,KC_H,KC_I
    )
};
//joystick config
joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    [0] = JOYSTICK_AXIS_IN(F4, 1000, 500,0),
    [1] = JOYSTICK_AXIS_IN(F5, 0, 500,1000),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}
