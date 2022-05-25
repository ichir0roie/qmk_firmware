// Copyright 2022 ichir0roieHome (@ichir0roieHome)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "joystick.h"
// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE=0,
};

enum custom_key{ModeCursor,ModeMouse=SAFE_RANGE};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(KC_NO,KC_NO,KC_NO,KC_NO)
};

# define maxAxis 1023
#define limitAxis 100
//joystick config
joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    [0] = JOYSTICK_AXIS_IN(F6, maxAxis-limitAxis, maxAxis/2,0),
    [1] = JOYSTICK_AXIS_IN(F7, 0, maxAxis/2,maxAxis-limitAxis),
};
