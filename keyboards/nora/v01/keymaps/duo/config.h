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

#pragma once

// Change LED count.
// #ifdef RGB_DI_PIN
//     #undef RGBLED_NUM
//     #define RGBLED_NUM 4 // Left(2) + Right(2)
// #endif

<<<<<<< HEAD:keyboards/nora/v01/keymaps/duo/config.h
=======
// place overrides here

#define NO_ACTION_ONESHOT
#undef LOCKING_SUPPORT_ENABLE

#define LAYER_STATE_8BIT
#define MAX_LAYER 5

#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE

#define RGBLIGHT_SLEEP
#define RGBLIGHT_LAYERS
>>>>>>> fork_origin/master:keyboards/dmqdesign/spin/keymaps/spidey3_pad/config.h
#define RGBLIGHT_LAYER_BLINK
#define RGBLIGHT_MAX_LAYERS 16 // Blinkで2レイヤー追加すると、デフォルトの8レイヤーを超えてしまうため、ここで定義

// This "may" reduce firmware size.
// #undef LOCKING_SUPPORT_ENABLE
// #undef LOCKING_RESYNC_ENABLE
// #define NO_ACTION_ONESHOT
// #define LAYER_STATE_8BIT // limit layers up to 8

#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 8 // keyboard's default:4
