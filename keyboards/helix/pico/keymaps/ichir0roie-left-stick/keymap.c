#include <keymap_jp.h>
#include <sendstring_jis.h>
#include "joystick.h"


// --------------------------------------------------------------------------------------------------------------------------------
// -------------------------map from jsonToC paste this.---------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------------------

#include <keymapAG.c>


# define maxAxis 1000
#define limitAxis 500
//joystick config
joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    // [0] = JOYSTICK_AXIS_IN(F4, maxAxis-limitAxis, maxAxis/2,0),//x
    // [1] = JOYSTICK_AXIS_IN(F5, 0, maxAxis/2,maxAxis-limitAxis),//y
    [0] = JOYSTICK_AXIS_IN(F4, 800, 500,300),
    [1] = JOYSTICK_AXIS_IN(F5, 300, 500,800),

};
