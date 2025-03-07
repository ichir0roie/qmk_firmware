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
#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_jp.h"

#ifdef AUDIO_ENABLE
    // float song_caps_on[][2] = SONG(CAPS_LOCK_ON_SOUND);
    // float song_caps_off[][2] = SONG(CAPS_LOCK_OFF_SOUND);
    // float song_adjust[][2] = SONG(UNICODE_WINDOWS);
#endif

// Defines names for use in layer keycodes and the keymap
enum layer_number {
    _US = 0,
    _JP,
    _NUM,
    _LOWER_US,
    _LOWER_JP,
    _LOWER_NUM,
    _RAISE,
    _ADJUST,
};

enum custom_keycodes {
  US = SAFE_RANGE,
  JP,
  GUI_IME,
  VERSION,
};

// Key Macro
// #define ESC_NUM TD(TD_ESC_NUM)
#define ESC_NUM LT(_NUM, KC_ESC)
// #define GRV_NUM LT(_NUM, KC_GRV)
// #define S_CAPS   TD(TD_LSFT_CAPS)
#define SP_LO_U  LT(_LOWER_US, KC_SPC)
#define SP_LO_J  LT(_LOWER_JP, KC_SPC)
#define SP_LO_N  LT(_LOWER_NUM, KC_SPC)
#define SP_RAI  LT(_RAISE, KC_SPC)
// #define SP_ADJ  LT(_ADJUST, KC_SPC)
// #define SP_NLOW LT(_NUM_LOWER, KC_SPC)
// #define BS_RAI  LT(_RAISE, KC_BSPC)
// #define SP_NRAI LT(_NUM_LOWER, KC_SPC)
// #define BS_NRAI LT(_NUM_LOWER, KC_BSPC)
// #define SP_SFT  MT(MOD_LSFT, KC_SPC)
#define C_ESC   LCTL_T(KC_ESC)
// #define C_SPC   LCTL(KC_SPC)
// #define C_SLSH  RCTL_T(KC_SLSH)
#define S_SLSH  RSFT_T(KC_SLSH)
#define S_LEFT  RSFT_T(KC_LEFT)
// #define CT_E    LCTL(KC_E)
// #define CT_A    LCTL(KC_A)
#define C_QUO   LCTL_T(KC_QUOT)
#define A_GRV   LALT(KC_GRV)
#define CA_SPC  LCA(KC_SPC)
// #define LOWER   MO(_LOWER)
// #define ADJUST  MO(_ADJUST)
#define NUM     TG(_NUM)
// #define HENKAN  LGUI(KC_GRV)
#define GUI_JA  LGUI_T(KC_LANG1)
#define GUI_EN  LGUI_T(KC_LANG2)
#define ALT_JA  LALT_T(KC_LANG1)
#define ALT_EN  LALT_T(KC_LANG2)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_US] = LAYOUT(
        ESC_NUM,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_EQL,   KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_PSLS,  KC_PAST,  KC_PMNS,  KC_PPLS,
           KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,       KC_BSPC,     KC_P7,    KC_P8,    KC_P9,
           C_ESC,      KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_MINS,    KC_ENT,      KC_P4,    KC_P5,    KC_P6,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     XXXXXXX,  KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_UP,    KC_P1,    KC_P2,    KC_P3,
        DM_PLY1,  DM_PLY2,    KC_LOPT,     KC_LCMD,      SP_LO_U,             SP_RAI,         GUI_IME,    KC_ROPT,     KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT
    ),
    [_JP] = LAYOUT(
        ESC_NUM,  JP_1,     JP_2,     JP_3,     JP_4,     JP_5,     JP_MINS,  JP_6,     JP_7,     KC_8,     KC_9,     KC_0,     KC_PSLS,  KC_PAST,  KC_PMNS,  KC_PPLS,
           KC_TAB,     JP_Q,     JP_W,     JP_E,     JP_R,     JP_T,     JP_Y,     JP_U,     JP_I,     JP_O,     JP_P,       KC_BSPC,     KC_P7,    KC_P8,    KC_P9,
           C_ESC,      JP_A,     JP_S,     JP_D,     JP_F,     JP_G,     JP_H,     JP_J,     JP_K,     JP_L,     JP_MINS,    KC_ENT,      KC_P4,    KC_P5,    KC_P6,
        KC_LSFT,  JP_Z,     JP_X,     JP_C,     JP_V,     JP_B,     JP_BSLS,  JP_N,     JP_M,     JP_COMM,  JP_DOT,   JP_SLSH,  KC_UP,    KC_P1,    KC_P2,    KC_P3,
        DM_PLY1,  DM_PLY2,    KC_LOPT,     KC_LCMD,      SP_LO_J,             SP_RAI,         GUI_IME,    KC_ROPT,     KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT
    ),
    [_NUM] = LAYOUT(//SP_LO_NUMはUSかJPのLOWERを見に行くようにできる？
        KC_ESC,   _______,  _______,  _______,  _______,  _______,  _______,  KC_PSLS,  KC_PSLS,  KC_PSLS,  KC_PAST,  KC_PMNS,  _______,  _______,  _______,  _______,
           _______,    _______,  _______,  _______,  _______,  _______,  _______,  KC_P7,    KC_P8,    KC_P9,    KC_PPLS,    _______,     _______,  _______,  _______,
           _______,    _______,  _______,  _______,  _______,  _______,  _______,  KC_P4,    KC_P5,    KC_P6,    XXXXXXX,    _______,     _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_P1,    KC_P2,    KC_P3,    XXXXXXX,  _______,  _______,  _______,  _______,
        _______,  _______,    _______,     _______,      SP_LO_N,            _______,        KC_P0,      KC_PDOT,     _______,  _______,  _______,  _______,  _______
    ),
    [_LOWER_US] = LAYOUT(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,  _______,
           KC_GRV,     KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,    _______,     _______,  _______,  _______,
           _______,    _______,  _______,  _______,  KC_GRV,   KC_EQL,   KC_BSLS,  KC_SCLN,  KC_QUOT,  KC_LBRC,  KC_RBRC,    KC_BSLS,     _______,  _______,  _______,
        _______,  _______,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_TILD,  KC_PLUS,  KC_PIPE,  KC_COLN,  KC_DQUO,  KC_LCBR,  KC_RCBR,  KC_PIPE,  _______,  _______,  _______,
        _______,  _______,    _______,     _______,      _______,            _______,        _______,    _______,     _______,  _______,  _______,  _______,  _______
    ),
    [_LOWER_JP] = LAYOUT(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,  _______,
           JP_ZKHK,    JP_EXLM,  JP_DQUO,  JP_HASH,  JP_DLR,   JP_PERC,  JP_AMPR,  JP_QUOT,  JP_LPRN,  JP_RPRN,  XXXXXXX,    _______,     _______,  _______,  _______,
           _______,    _______,  _______,  JP_CIRC,  JP_YEN,   JP_AT,    JP_SCLN,  JP_COLN,  JP_LBRC,  JP_RBRC,  JP_BSLS,    _______,     _______,  _______,  _______,
        _______,  KC_MUTE,  KC_VOLD,  KC_VOLU,  JP_TILD,  JP_PIPE,  JP_GRV,   JP_PLUS,  JP_ASTR,  JP_LCBR,  JP_RCBR,  JP_UNDS,  _______,  _______,  _______,  _______,
        _______,  _______,    _______,     _______,      _______,            _______,        _______,    _______,     _______,  _______,  _______,  _______,  _______
    ),
    [_LOWER_NUM] = LAYOUT(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_EQL,   KC_PSLS,  KC_PAST,  KC_PMNS,  KC_PPLS,
           KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,       KC_BSPC,     KC_P7,    KC_P8,    KC_P9,
           C_ESC,      KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_MINS,    KC_ENT,      KC_P4,    KC_P5,    KC_P6,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     _______,  KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_UP,    KC_P1,    KC_P2,    KC_P3,
        KC_VOLD,  KC_VOLU,    KC_LOPT,     KC_LCMD,      _______,            _______,        GUI_IME,    KC_ROPT,     KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT
    ),
    [_RAISE] = LAYOUT(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,  _______,
           KC_ESC,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,       KC_DEL,      _______,  _______,  _______,
           _______,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_SCLN,    KC_QUOT,     _______,  _______,  _______,
        _______,  _______,  KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   KC_F11,   KC_F12,   _______,  _______,  _______,
        _______,  _______,    _______,     _______,      _______,             _______,       _______,    _______,     _______,  _______,  _______,  _______,  _______
    ),
    [_ADJUST] = LAYOUT(
        DM_RSTP,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PSCR,  KC_SLCK,  KC_PAUS,
           _______,    US,       JP,       _______,  _______,  RGB_SPI,  RGB_HUI,  RGB_SAI,  RGB_VAI,  _______,  RGB_RMOD,   KC_INS,      _______,  _______,  _______,
           _______,    _______,  _______,  _______,  _______,  RGB_SPD,  RGB_HUD,  RGB_SAD,  RGB_VAD,  RGB_TOG,  RGB_MOD,    VERSION,     _______,  _______,  _______,
        KC_CAPS,  KC_CAPS,  _______,  _______,  _______,  _______,  _______,  NUM,      _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        DM_REC1,  DM_REC2,    _______,     _______,      _______,            _______,        _______,    _______,     _______,  _______,  _______,  _______,  _______
    ),
};

uint16_t key_timer;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case US: // Change default ayer --> Write to EEPROM
            if (record->event.pressed) {
                set_single_persistent_default_layer(_US);
            }
            return false;
        case JP: // Change default ayer --> Write to EEPROM
            if (record->event.pressed) {
                set_single_persistent_default_layer(_JP);
            }
            return false;
        case GUI_IME: // Toggle IME, my Mac IME shortcut key dependent.
            if (record->event.pressed) {
                key_timer = timer_read();
                register_code(KC_RGUI);
            } else {
                unregister_code(KC_RGUI);

                if (timer_elapsed(key_timer) < TAPPING_TERM) {
                    SEND_STRING(SS_LCMD(SS_LALT(SS_TAP(X_SPC))));
                }
            }
            return false;
        case VERSION: // Output firmware info.
            if (record->event.pressed) {
                SEND_STRING (QMK_KEYBOARD ":" QMK_KEYMAP " @ " QMK_VERSION " | " QMK_BUILDDATE);
            }
            return false;
        default:
            break;
    }
    return true;
}

//------------------------------------------------------------------------------
// Dynamic Macro settings
//------------------------------------------------------------------------------
//TODO ダイナミックマクロ記録開始時に現在のベースレイヤーを保存して、元に戻すのをやりたい
// bool savedNumLayer = false; // Stored Num layer status

void dynamic_macro_play_user(int8_t direction) {
    // Revert layer indicator, just after macro played.
    // It returns to base layer. WHY???
    layer_state_set_user(layer_state);
}

void dynamic_macro_record_start_user(void) {
    //     // Before recording clears the layer status,
    // // check Num layer to store its status.
    // if (IS_LAYER_ON(_NUM)) {
    //     savedNumLayer = true;
    // }
    rgblight_blink_layer_repeat(10, 250, 3);
}

void dynamic_macro_record_end_user(int8_t direction) {
    // // Restore Num layer status, if it was ON before recording.
    // if (savedNumLayer) {
    //     layer_on(_NUM);
    //     savedNumLayer = false;
    // }
    rgblight_blink_layer_repeat(11, 250, 3);
}

//------------------------------------------------------------------------------
// RGB Light settings
//------------------------------------------------------------------------------
#ifdef RGBLIGHT_LAYERS

// Indicator LED settings
#define LED_INDICATOR_INDEX 0         // where to start indicator
#define LED_INDICATOR_COUNT 2         // how many LEDs used for indicator
#define LED_INDICATOR_CHANGE_COUNT 1  // how many LEDs to change for temporally layer
#define LED_DIMMER_LEVEL 150          // brightness dimmer

// for Default layer (= Base layer)
const rgblight_segment_t PROGMEM my_mac_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {LED_INDICATOR_INDEX , LED_INDICATOR_COUNT, HSV_WHITE - LED_DIMMER_LEVEL}
);
const rgblight_segment_t PROGMEM my_win_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {LED_INDICATOR_INDEX , LED_INDICATOR_COUNT, HSV_BLUE - LED_DIMMER_LEVEL}
);
const rgblight_segment_t PROGMEM my_num_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {LED_INDICATOR_INDEX , LED_INDICATOR_COUNT, HSV_YELLOW - LED_DIMMER_LEVEL}
);

// for temporal layer
const rgblight_segment_t PROGMEM my_caps_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {LED_INDICATOR_INDEX + 1 , 1, HSV_MAGENTA - LED_DIMMER_LEVEL}
);

const rgblight_segment_t PROGMEM my_lower_us_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {LED_INDICATOR_INDEX , LED_INDICATOR_CHANGE_COUNT, HSV_GREEN - LED_DIMMER_LEVEL}
);

const rgblight_segment_t PROGMEM my_lower_jp_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {LED_INDICATOR_INDEX , LED_INDICATOR_CHANGE_COUNT, HSV_GREEN - LED_DIMMER_LEVEL}
);

const rgblight_segment_t PROGMEM my_lower_num_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {LED_INDICATOR_INDEX , LED_INDICATOR_CHANGE_COUNT, HSV_GREEN - LED_DIMMER_LEVEL}
);

const rgblight_segment_t PROGMEM my_raise_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {LED_INDICATOR_INDEX , LED_INDICATOR_CHANGE_COUNT, HSV_CYAN - LED_DIMMER_LEVEL}
);

const rgblight_segment_t PROGMEM my_num_lower_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {LED_INDICATOR_INDEX , LED_INDICATOR_CHANGE_COUNT, HSV_GOLD - LED_DIMMER_LEVEL}
);

const rgblight_segment_t PROGMEM my_adjust_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {LED_INDICATOR_INDEX , LED_INDICATOR_CHANGE_COUNT, HSV_RED - LED_DIMMER_LEVEL}
);

const rgblight_segment_t PROGMEM my_blink1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {LED_INDICATOR_INDEX , LED_INDICATOR_COUNT, HSV_ORANGE - LED_DIMMER_LEVEL}
);

const rgblight_segment_t PROGMEM my_blink2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {LED_INDICATOR_INDEX , LED_INDICATOR_COUNT, HSV_PINK - LED_DIMMER_LEVEL}
);

// Define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_mac_layer,
    my_win_layer,
    my_num_layer,
    my_caps_layer,
    my_lower_us_layer,
    my_lower_jp_layer,
    my_lower_num_layer,
    my_raise_layer,
    my_num_lower_layer,
    my_adjust_layer,
    my_blink1_layer,
    my_blink2_layer
);

// Enabling and disabling lighting layers
layer_state_t layer_state_set_user(layer_state_t state) {
    // Set the layer status
    // _LOWERと_NUM_LOWERは同時に押されないので、別々に判定する
    if (state != update_tri_layer_state(state, _LOWER_US, _RAISE, _ADJUST)) {
        state = update_tri_layer_state(state, _LOWER_US, _RAISE, _ADJUST);
    } else if (state != update_tri_layer_state(state, _LOWER_JP, _RAISE, _ADJUST)) {
        state = update_tri_layer_state(state, _LOWER_JP, _RAISE, _ADJUST);
    } else {
        state = update_tri_layer_state(state, _LOWER_NUM, _RAISE, _ADJUST);
    }

    rgblight_set_layer_state(2, layer_state_cmp(state, _NUM));
    rgblight_set_layer_state(4, layer_state_cmp(state, _LOWER_US));
    rgblight_set_layer_state(5, layer_state_cmp(state, _LOWER_JP));
    rgblight_set_layer_state(6, layer_state_cmp(state, _LOWER_NUM));
    rgblight_set_layer_state(7, layer_state_cmp(state, _RAISE));
    // rgblight_set_layer_state(6, layer_state_cmp(state, _NUM_LOWER));
    rgblight_set_layer_state(9, layer_state_cmp(state, _ADJUST));

    return state;
}

// Enabling and disabling lighting layers for default layer
layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _US));
    rgblight_set_layer_state(1, layer_state_cmp(state, _JP));
    rgblight_set_layer_state(2, layer_state_cmp(state, _NUM));

    return state;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(3, led_state.caps_lock);

    return true;
}
#endif

//------------------------------------------------------------------------------
// Keyboard Initialization
//------------------------------------------------------------------------------
void keyboard_post_init_user(void) {

#ifdef RGB_DI_PIN
#ifdef RGBLIGHT_LAYERS
    // Enable the LED layers.
    rgblight_layers = my_rgb_layers;

    // prevent RGB light overrides layer indicator.
    layer_state_set(default_layer_state);
#endif
#endif

}
