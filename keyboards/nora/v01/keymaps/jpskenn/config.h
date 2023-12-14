/* Copyright 2021 Takeshi Nishio
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

<<<<<<< HEAD:keyboards/nora/v01/keymaps/jpskenn/config.h
#pragma once

// Change LED count.
// #ifdef RGB_DI_PIN
//     #undef RGBLED_NUM
//     #define RGBLED_NUM 4 // Left(2) + Right(2)
// #endif

#define RGBLIGHT_LAYER_BLINK
#define RGBLIGHT_MAX_LAYERS 10 // Blinkで2レイヤー追加すると、デフォルトの8レイヤーを超えてしまうため、ここで定義

// This "may" reduce firmware size.
// #undef LOCKING_SUPPORT_ENABLE
// #undef LOCKING_RESYNC_ENABLE
// #define NO_ACTION_ONESHOT
// #define LAYER_STATE_8BIT // limit layers up to 8
=======
#include "quantum.h"

#if defined(AUDIO_ENABLE) && defined(MUSIC_MAP)
const uint8_t music_map[MATRIX_ROWS][MATRIX_COLS] = {
    { 0, 47, 49, 51, 53, 55, 57, 59, 61,  0},
    {32,  0, 34, 36, 38, 40, 42, 44,  0,  0},
    {17, 19,  0, 21, 23, 25, 27, 29,  0,  0},
    { 1,  3,  5,  0,  7,  9, 11, 13, 15,  0},
    { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
    { 0, 48, 50, 52, 54,  0, 56, 58, 60, 62},
    { 0, 33, 35, 37, 39, 41,  0, 43, 45, 46},
    { 0, 18, 20, 22, 24, 26, 28,  0, 30, 31},
    { 0,  2,  4,  6,  8, 10, 12, 14,  0, 16},
    { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0}
};
#endif
>>>>>>> fork_origin/master:keyboards/unison/v04/v04.c
