#include <keymap_jp.h>
#include <sendstring_jis.h>
#include "joystick.h"


// --------------------------------------------------------------------------------------------------------------------------------
// -------------------------map from jsonToC paste this.---------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------------------

# define maxAxis 1000
#define limitAxis 500
//joystick config
joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    // [0] = JOYSTICK_AXIS_IN(F4, maxAxis-limitAxis, maxAxis/2,0),//x
    // [1] = JOYSTICK_AXIS_IN(F5, 0, maxAxis/2,maxAxis-limitAxis),//y
    [0] = JOYSTICK_AXIS_IN(F4, 800, 500,300),
    [1] = JOYSTICK_AXIS_IN(F5, 300, 500,800),

};

bool modeCursor=true;

enum custom_keycodes{
    MODE_CURSOR=SAFE_RANGE
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case MODE_CURSOR:
            if (record->event.pressed) {
                modeCursor=!modeCursor;
            }
            return false;
    }
    return true;
};

#include <keymapAG.c>

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
