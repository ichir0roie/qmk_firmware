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

#include "quantum.h"

/*
References:

FULL 10x8 MATRIX
{ k00,   k01,   k02,   k03,   k04,   k05,   k06,   k07   }, \
{ k10,   k11,   k12,   k13,   k14,   k15,   k16,   k17   }, \
{ k20,   k21,   k22,   k23,   k24,   k25,   k26,   k27   }, \
{ k30,   k31,   k32,   k33,   k34,   k35,   k36,   k37   }, \
{ k40,   k41,   k42,   k43,   k44,   k45,   k46,   k47   }, \
{ k50,   k51,   k52,   k53,   k54,   k55,   k56,   k57   }, \
{ k60,   k61,   k62,   k63,   k64,   k65,   k66,   k67   }, \
{ k70,   k71,   k72,   k73,   k74,   k75,   k76,   k77   }, \
{ k80,   k81,   k82,   k83,   k84,   k85,   k86,   k87   }, \
{ k90,   k91,   k92,   k93,   k94,   k95,   k96,   k97   }  \

Merge two rows into single row to make 5x16 keyboard.
{ k00,   k50,   k01,   k51,   k02,   k52,   k03,   k53,   k04,   k54,   k05,   k55,   k06,   k56,   k07,   k57   }, \
{ k10,   k60,   k11,   k61,   k12,   k62,   k13,   k63,   k14,   k64,   k15,   k65,   k16,   k66,   k17,   k67   }, \
{ k20,   k70,   k21,   k71,   k22,   k72,   k23,   k73,   k24,   k74,   k25,   k75,   k26,   k76,   k27,   k77   }, \
{ k30,   k80,   k31,   k81,   k32,   k82,   k33,   k83,   k34,   k84,   k35,   k85,   k36,   k86,   k37,   k87   }, \
{ k40,   k90,   k41,   k91,   k42,   k92,   k43,   k93,   k44,   k94,   k45,   k95,   k46,   k96,   k47,   k97   }, \

*/

#define LAYOUT( \
    k00, k50, k01, k51, k02, k52, k03, k53, k04, k54, k05, k55, k06, k56, k07, k57, \
    k60,    k11, k61, k12, k62, k13, k63, k14, k64, k15, k65, k16, k66, k17,   k67, \
    k70,    k21, k71, k22, k72, k23, k73, k24, k74, k25, k75, k26, k76, k27,   k77, \
    k30, k80, k31, k81, k32, k82, k33, k83, k34, k84, k35, k85, k36, k86, k37, k87, \
                 k91,   k42,   k92,  k93, k44, k94,  k45,  k95,   k46 \
) \
{ \
    { k00,   k01,   k02,   k03,   k04,   k05,   k06,   k07   }, \
    { KC_NO, k11,   k12,   k13,   k14,   k15,   k16,   k17   }, \
    { KC_NO, k21,   k22,   k23,   k24,   k25,   k26,   k27   }, \
    { k30,   k31,   k32,   k33,   k34,   k35,   k36,   k37   }, \
    { KC_NO, KC_NO, k42,   KC_NO, k44,   k45,   k46,   KC_NO }, \
    { k50,   k51,   k52,   k53,   k54,   k55,   k56,   k57   }, \
    { k60,   k61,   k62,   k63,   k64,   k65,   k66,   k67   }, \
    { k70,   k71,   k72,   k73,   k74,   k75,   k76,   k77   }, \
    { k80,   k81,   k82,   k83,   k84,   k85,   k86,   k87   }, \
    { KC_NO, k91,   k92,   k93,   k94,   k95,   KC_NO, KC_NO }  \
}
