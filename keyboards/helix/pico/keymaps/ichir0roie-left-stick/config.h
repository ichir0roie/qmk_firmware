/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#undef TAPPING_TERM
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 2
/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#undef TAPPING_TERM
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 2




#define MK_COMBINED

#define MOUSEKEY_DELAY 50 // 300 /* Delay between pressing a movement key and cursor movement */
#define MOUSEKEY_INTERVAL 16 // 50 /* Time between cursor movements in milliseconds */
#define MOUSEKEY_MOVE_DELTA 1 // 5 /* Step size */
#define MOUSEKEY_MAX_SPEED 50 // 10 /* Maximum cursor speed at which acceleration stops */
#define MOUSEKEY_TIME_TO_MAX 60 // 20 /* Time until maximum cursor speed is reached */

#define MOUSEKEY_WHEEL_DELAY 300 // 300 /* Delay between pressing a wheel key and wheel movement */
#define MOUSEKEY_WHEEL_INTERVAL 100 // 100 /* Time between wheel movements */
#define MOUSEKEY_WHEEL_MAX_SPEED 20 // 8 /* Maximum number of scroll steps per scroll action */
#define MOUSEKEY_WHEEL_TIME_TO_MAX 20 // 40 /* Time until maximum scroll speed is reached */


// #define MK_3_SPEED
// #define MK_MOMENTARY_ACCEL

// #define MK_C_OFFSET_UNMOD 16 // 16  // Cursor offset per movement (unmodified)  //
// #define MK_C_OFFSET_0 1 // 1  // Cursor offset per movement (KC_ACL0)  //
// #define MK_C_OFFSET_1 4  // 4  // Cursor offset per movement (KC_ACL1)  //
// #define MK_C_OFFSET_2 32 // 32  // Cursor offset per movement (KC_ACL2)  //

// #define MK_C_INTERVAL_UNMOD 16 // 16  // Time between cursor movements (unmodified)  //
// #define MK_C_INTERVAL_0 16 // 32  // Time between cursor movements (KC_ACL0)  //
// #define MK_C_INTERVAL_1 16 // 16  // Time between cursor movements (KC_ACL1)  //
// #define MK_C_INTERVAL_2 16 // 16  // Time between cursor movements (KC_ACL2)  //


// #define MK_W_OFFSET_UNMOD 1 // 1  // Scroll steps per scroll action (unmodified)  //
// #define MK_W_OFFSET_0 1 // 1  // Scroll steps per scroll action (KC_ACL0)  //
// #define MK_W_OFFSET_1 9 // 1  // Scroll steps per scroll action (KC_ACL1)  //
// #define MK_W_OFFSET_2 91 // 1  // Scroll steps per scroll action (KC_ACL2)  //

// #define MK_W_INTERVAL_UNMOD 64 // 40  // Time between scroll steps (unmodified)  //
// #define MK_W_INTERVAL_0 64// 360  // Time between scroll steps (KC_ACL0)  //
// #define MK_W_INTERVAL_1 64 // 120  // Time between scroll steps (KC_ACL1)  //
// #define MK_W_INTERVAL_2 64 // 20  // Time between scroll steps (KC_ACL2)


#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS { B5, B6, F6, F7, B1, B3, B2 }
// #define MATRIX_COL_PINS { F4, F5, B5, B6, B1, B3, B2 }



// #define ENCODERS_PAD_A { B6 }
// #define ENCODERS_PAD_B { B5 }
#undef ENCODERS_PAD_A
#undef ENCODERS_PAD_B



// Max 32
#define JOYSTICK_BUTTON_COUNT 0
// Max 6: X, Y, Z, Rx, Ry, Rz
#define JOYSTICK_AXES_COUNT 2











