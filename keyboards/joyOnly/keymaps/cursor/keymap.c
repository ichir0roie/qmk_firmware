// Copyright 2022 ichir0roieHome (@ichir0roieHome)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "joystick.h"
#include "print.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE=0,
};

enum custom_key{ModeCursor,ModeMouse=SAFE_RANGE};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(ModeCursor,ModeMouse,RESET,DEBUG)
};


# define maxAxis 1023
#define limitAxis 100
//joystick config
joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    [0] = JOYSTICK_AXIS_IN(F6, maxAxis-limitAxis, maxAxis/2,0),
    [1] = JOYSTICK_AXIS_IN(F7, 0, maxAxis/2,maxAxis-limitAxis),
};

int kcMap[4]=
    {
        KC_LEFT,
        KC_RIGHT,
        KC_UP,
        KC_DOWN
        // KC_A,
        // KC_D,
        // KC_W,
        // KC_S
    };

#define offSet 10

int tempAxesX=0;
int tempAxesY=0;
bool run=false;
int dirX=0;
int dirY=0;
int beforeDirX=0;
int beforeDirY=0;

bool modeCursor=true;

// void joystick_task(){
// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
void matrix_scan_user(){

    if(modeCursor){
        tempAxesX=joystick_status.axes[0]*abs(joystick_status.axes[0])/30;
        if(tempAxesX<-offSet){
            dirX=-1;
        }else if (tempAxesX>offSet){
            dirX=1;
        }else{
            dirX=0;
        }
        tempAxesY=joystick_status.axes[1]*abs(joystick_status.axes[1])/30;
        if(tempAxesY<-offSet){
            dirY=-1;
        }else if (tempAxesY>offSet){
            dirY=1;
        }else{
            dirY=0;
        }

        if(dirX!=beforeDirX){
            if(dirX<0){
                register_code(kcMap[0]);
                unregister_code(kcMap[1]);
            }else if(dirX>0){
                register_code(kcMap[1]);
                unregister_code(kcMap[0]);
            }
        }
        if( beforeDirX!=0 && dirX==0){
            unregister_code(kcMap[0]);
            unregister_code(kcMap[1]);
        }
        if(dirY!=beforeDirY){
            if(dirY<0){
                register_code(kcMap[2]);
                unregister_code(kcMap[3]);
            }else if(dirY>0){
                register_code(kcMap[3]);
                unregister_code(kcMap[2]);
            }
        }
        if(beforeDirY!=0&&dirY==0){
            unregister_code(kcMap[2]);
            unregister_code(kcMap[3]);
        }

        beforeDirX=dirX;
        beforeDirY=dirY;
    }

}
