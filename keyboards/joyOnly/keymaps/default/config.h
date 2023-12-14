// Copyright 2022 ichir0roieHome (@ichir0roieHome)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"


#define ANALOG_JOYSTICK_X_AXIS_PIN			F4	// (Required) The pin used for the vertical/X axis.	not defined
#define ANALOG_JOYSTICK_Y_AXIS_PIN			F5	// (Required) The pin used for the horizontal/Y axis.	not defined
#define ANALOG_JOYSTICK_AXIS_MIN			10		// (Optional) Sets the lower range to be considered movement.	0
#define ANALOG_JOYSTICK_AXIS_MAX			1000	// (Optional) Sets the upper range to be considered movement.	1023
#define ANALOG_JOYSTICK_SPEED_REGULATOR		50		// (Optional) The divisor used to slow down movement. (lower makes it faster)	20
#define ANALOG_JOYSTICK_READ_INTERVAL		10		// (Optional) The interval in milliseconds between reads.	10
#define ANALOG_JOYSTICK_SPEED_MAX			2		// (Optional) The maximum value used for motion.	2
#define ANALOG_JOYSTICK_CLICK_PIN			B2		// (Optional) The pin wired up to the press switch of the analog stick.	not defined

