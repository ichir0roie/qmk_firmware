// Copyright 2022 ichir0roieHome (@ichir0roieHome)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "joystick.h"
#include "analog.h"
#include "print.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE=0,
};


enum custom_key{
    ModeCursor,
    ModeMouse=SAFE_RANGE,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(ModeCursor,ModeMouse,RESET,DEBUG)
};

bool modeCursor=false;
bool modeMouse=false;
bool released=false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode){
        case ModeCursor:
            modeCursor=record->event.pressed;
            break;
        case ModeMouse:
            modeMouse= record->event.pressed;
            break;
    }

    return true;
}

# define maxAxis 1025
//joystick config
joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    [0] = JOYSTICK_AXIS_IN(F4, maxAxis, maxAxis/2,0),
    [1] = JOYSTICK_AXIS_IN(F5, 0, maxAxis/2,maxAxis),
};

int sensorX =0;
int sensorY =0;

int kcMaps[2][4]={
    {
        KC_LEFT,
        KC_RIGHT,
        KC_UP,
        KC_DOWN
    },
    {
        KC_MS_L,
        KC_MS_R,
        KC_MS_U,
        KC_MS_D
    }};
int regKey=-1;
int regMode=-1;
bool sended=false;
#define countMAX 100
int tempSensor=0;

#define analogBuffer 4

void matrix_scan_user(){
    if(modeCursor||modeMouse){

        // TODO: disable joystick .

        tempSensor=(analogReadPin(F4)+analogBuffer)/10-50;
        uprintf("%d\n",tempSensor);
        if(abs(tempSensor)>1){
            sensorX+=tempSensor;
        }
        tempSensor=(analogReadPin(F5)+analogBuffer)/10-50;
        if(abs(tempSensor)>1){
            sensorY+=tempSensor;
        }
    }else{
        sensorX=countMAX;
        sensorY=countMAX;
    }
    if(sended){
        unregister_code(KC_LEFT);
        unregister_code(KC_RIGHT);
        unregister_code(KC_UP);
        unregister_code(KC_DOWN);
        unregister_code(KC_MS_L);
        unregister_code(KC_MS_R);
        unregister_code(KC_MS_U);
        unregister_code(KC_MS_D);
        sended=false;
    }
    if(modeCursor){
        regMode=0;
    }else if(modeMouse){
        regMode=1;
    }else{
        regMode=-1;
    }
    if(sensorX<-countMAX)regKey=1;
    if(sensorX> countMAX)regKey=0;
    if(regMode>=0&&regKey>=0){
        register_code(kcMaps[regMode][regKey]);
        sended=true;
        sensorX=0;
        regKey=-1;
    }
    if(sensorY<-countMAX)regKey=2;
    if(sensorY> countMAX)regKey=3;
    if(regMode>=0&&regKey>=0){
        register_code(kcMaps[regMode][regKey]);
        sended=true;
        sensorY=0;
        regKey=-1;
    }

}

