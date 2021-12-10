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


// #define MK_KINETIC_SPEED

// #define MOUSEKEY_DELAY  4 //8
// //Delay between pressing a movement key and cursor movement 
// #define MOUSEKEY_INTERVAL 8 //8
// //Time between cursor movements in milliseconds 
// #define MOUSEKEY_MOVE_DELTA 1 //25
// //Step size for accelerating from initial to base speed 

// #define MOUSEKEY_INITIAL_SPEED 1 //100
// //Initial speed of the cursor in pixel per second 
// #define MOUSEKEY_BASE_SPEED 1//1000
// //Maximum cursor speed at which acceleration stops
// #define MOUSEKEY_DECELERATED_SPEED 1000//400
// //Decelerated cursor speed  
// #define MOUSEKEY_ACCELERATED_SPEED 1//3000
// //Accelerated cursor speed 

// #define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 100//16
// //Initial number of movements of the mouse wheel 
// #define MOUSEKEY_WHEEL_BASE_MOVEMENTS 1//32
// //Maximum number of movements at which acceleration stops 
// #define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 1//8
// //Decelerated wheel movements
// #define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 1//48
// //Accelerated wheel movements 


#define MK_COMBINED

#define MOUSEKEY_DELAY 100 //300
/* Delay between pressing a movement key and cursor movement */

#define MOUSEKEY_INTERVAL 16 //50
/* Time between cursor movements in milliseconds */

#define MOUSEKEY_MOVE_DELTA 1 //5
/* Step size */

#define MOUSEKEY_MAX_SPEED 20 // 10
/* Maximum cursor speed at which acceleration stops */

#define MOUSEKEY_TIME_TO_MAX 30 //20
/* Time until maximum cursor speed is reached */

#define MOUSEKEY_WHEEL_DELAY 100 //300
/* Delay between pressing a wheel key and wheel movement */

#define MOUSEKEY_WHEEL_INTERVAL 50 //100
/* Time between wheel movements */

#define MOUSEKEY_WHEEL_MAX_SPEED 5 //8
/* Maximum number of scroll steps per scroll action */

#define MOUSEKEY_WHEEL_TIME_TO_MAX 20 //40
/* Time until maximum scroll speed is reached */
