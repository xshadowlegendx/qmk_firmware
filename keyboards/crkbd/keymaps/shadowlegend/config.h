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

#define DYNAMIC_KEYMAP_LAYER_COUNT 5

//#define USE_MATRIX_I2C

//#define QUICK_TAP_TERM 0
#define PERMISSIVE_HOLD
#define TAPPING_TERM 180

#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 2
#define OLED_TIMEOUT 128000
#define OLED_BRIGHTNESS 128
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 32
#define SPLIT_WPM_ENABLE
#define SPLIT_OLED_ENABLE

#define USB_MAX_POWER_CONSUMPTION 500

#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_SPD_STEP 8
    #define RGB_MATRIX_HUE_STEP 16
    #define RGB_MATRIX_SAT_STEP 16
    #define RGB_MATRIX_VAL_STEP 16
    #define RGB_MATRIX_LED_FLUSH_LIMIT 16

    #define RGB_MATRIX_KEYPRESSES
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #undef RGB_MATRIX_MAXIMUM_BRIGHTNESS
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 255

    #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
    #define ENABLE_RGB_MATRIX_CYCLE_ALL
    #define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
    #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
    #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
    #define ENABLE_RGB_MATRIX_MULTISPLASH
    #define ENABLE_RGB_MATRIX_STARLIGHT
#endif

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_TWINKLE

    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL

    #undef RGBLIGHT_MODE_SNAKE
    #undef RGBLIGHT_MODE_KNIGHT
    #undef RGBLIGHT_MODE_RGB_TEST
    #undef RGBLIGHT_EFFECT_ALTERNATING

    #define RGBLIGHT_SPLIT

    #define RGBLIGHT_HUE_STEP 16
    #define RGBLIGHT_SAT_STEP 16
    #define RGBLIGHT_VAL_STEP 16
    #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_MOOD
#endif

