// Copyright 2022 ichir0roieHome (@ichir0roieHome)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "joystick.h"
#include "analog.h"


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
# define maxAxis 1025
//joystick config
joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    [0] = JOYSTICK_AXIS_IN(F4, maxAxis, maxAxis/2,0),
    [1] = JOYSTICK_AXIS_IN(F5, 0, maxAxis/2,maxAxis),
};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    return true;
}

int sensorX =0;
int sensorY =0;
void matrix_scan_user(){


    sensorX=analogReadPin(F4);
    sensorY=analogReadPin(F5);

    if(sensorX<maxAxis/2-30){
        register_code(KC_MS_R);
        unregister_code(KC_MS_L);
    }else if(sensorX>maxAxis/2+30){
        register_code(KC_MS_L);
        unregister_code(KC_MS_R);
    }else{
        unregister_code(KC_MS_L);
        unregister_code(KC_MS_R);
    }
    if(sensorY<maxAxis/2-30){
        register_code(KC_MS_U);
        unregister_code(KC_MS_D);
    }else if(sensorY>maxAxis/2+30){
        register_code(KC_MS_D);
        unregister_code(KC_MS_U);
    }else{
        unregister_code(KC_MS_U);
        unregister_code(KC_MS_D);
    }

}
