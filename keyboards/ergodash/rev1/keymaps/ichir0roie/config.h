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
#define MOUSEKEY_MAX_SPEED 150 // 10 /* Maximum cursor speed at which acceleration stops */
#define MOUSEKEY_TIME_TO_MAX 50 // 20 /* Time until maximum cursor speed is reached */

#define MOUSEKEY_WHEEL_DELAY 0 // 300 /* Delay between pressing a wheel key and wheel movement */
#define MOUSEKEY_WHEEL_INTERVAL 100 // 100 /* Time between wheel movements */
#define MOUSEKEY_WHEEL_MAX_SPEED 10 // 8 /* Maximum number of scroll steps per scroll action */
#define MOUSEKEY_WHEEL_TIME_TO_MAX 50 // 40 /* Time until maximum scroll speed is reached */


// #define MK_3_SPEED
// #define MK_MOMENTARY_ACCEL

// #define MK_C_OFFSET_0 1 // 1  // Cursor offset per movement (KC_ACL0)  //
// #define MK_C_OFFSET_UNMOD 5 // 16  // Cursor offset per movement (unmodified)  //
// #define MK_C_OFFSET_1 25 // 4  // Cursor offset per movement (KC_ACL1)  //
// #define MK_C_OFFSET_2 125 // 32  // Cursor offset per movement (KC_ACL2)  //

// #define MK_C_INTERVAL_UNMOD 16 // 16  // Time between cursor movements (unmodified)  //
// #define MK_C_INTERVAL_0 16 // 32  // Time between cursor movements (KC_ACL0)  //
// #define MK_C_INTERVAL_1 16 // 16  // Time between cursor movements (KC_ACL1)  //
// #define MK_C_INTERVAL_2 16 // 16  // Time between cursor movements (KC_ACL2)  //


// #define MK_W_OFFSET_0 1 // 1  // Scroll steps per scroll action (KC_ACL0)  //
// #define MK_W_INTERVAL_0 720// 360  // Time between scroll steps (KC_ACL0)  //
// #define MK_W_OFFSET_UNMOD 1 // 1  // Scroll steps per scroll action (unmodified)  //
// #define MK_W_INTERVAL_UNMOD 360 // 40  // Time between scroll steps (unmodified)  //
// #define MK_W_OFFSET_1 1 // 1  // Scroll steps per scroll action (KC_ACL1)  //
// #define MK_W_INTERVAL_1 180 // 120  // Time between scroll steps (KC_ACL1)  //
// #define MK_W_OFFSET_2 1 // 1  // Scroll steps per scroll action (KC_ACL2)  //
// #define MK_W_INTERVAL_2  90 // 20  // Time between scroll steps (KC_ACL2)



// #define MK_KINETIC_SPEED // 未定義 // キネティックモードを有効にする

// #define mousekey_DELAY  1000// 8 // 移動キーを押してからカーソルを移動するまでの遅延
// #define mousekey_INTERVAL 8 // 8 // カーソル移動間の時間（ミリ秒）
// #define mousekey_MOVE_DELTA 10000 // 25 // 初期速度から基本速度まで加速するためのステップサイズ
// #define mousekey_INITIAL_SPEED 100 // 100 // カーソルの初速度（ピクセル/秒）
// #define mousekey_BASE_SPEED 1000 // 1000 // 加速が停止する最大カーソル速度
// #define mousekey_DECELERATED_SPEED 400 // 400 // 減速カーソル速度
// #define mousekey_ACCELERATED_SPEED 3000 // 3000 // カーソル速度の加速
// #define mousekey_WHEEL_INITIAL_MOVEMENTS 16 // 16 // マウスホイールの最初の動きの数
// #define mousekey_WHEEL_BASE_MOVEMENTS 32 // 32 // 加速が停止する最大移動回数
// #define mousekey_WHEEL_ACCELERATED_MOVEMENTS 48 // 48 // 加速されたホイールの動き
// #define mousekey_WHEEL_DECELERATED_MOVEMENTS 8 // 8 // 減速されたホイールの動き
