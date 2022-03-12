// Copyright 2022 ichir0roieHome (@ichir0roieHome)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER ichir0roieHome
#define PRODUCT      test22

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 2

#define MATRIX_ROW_PINS { D1, D0 }
#define MATRIX_COL_PINS { D4, C6 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW


/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define SOFT_SERIAL_PIN D0  // or D1, D2, D3, E6

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

// Max 32
#define JOYSTICK_BUTTON_COUNT 0
// Max 6: X, Y, Z, Rx, Ry, Rz
#define JOYSTICK_AXES_COUNT 2
