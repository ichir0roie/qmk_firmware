#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(JP_AT, JP_ASTR, JP_PLUS, JP_MINS, JP_DQUO, JP_UNDS, KC_CAPS, KC_SLCK, JP_BSLS, JP_QUOT, JP_LPRN, JP_LCBR, JP_LBRC, JP_HASH, KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_PAUS, KC_PSCR, KC_Y, KC_U, KC_I, KC_O, KC_P, JP_EQL, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_NLCK, KC_INS, KC_H, KC_J, KC_K, KC_L, JP_SCLN, JP_COLN, MO(1), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_BSPC, KC_DEL, KC_N, KC_M, KC_COMM, KC_DOT, JP_SLSH, MO(1), KC_LGUI, KC_GRV, KC_LALT, KC_LCTL, KC_LSFT, MO(2), MO(3), KC_ENT, KC_SPC, KC_LSFT, KC_RCTL, KC_RALT, KC_APP, KC_GRV, LGUI(KC_V), LCA(KC_V), LGUI(LSFT(JP_S)), LGUI(LCTL(KC_LEFT)), LGUI(KC_TAB), LGUI(LCTL(KC_RGHT))),
	[1] = LAYOUT(KC_NO, KC_PSCR, KC_KANA, KC_HENK, KC_MHEN, KC_PAUS, KC_NO, KC_NO, KC_PAUS, KC_MHEN, KC_HENK, KC_KANA, KC_PSCR, KC_NO, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_MUTE, KC_NO, KC_NO, KC_MUTE, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_VOLU, KC_NO, KC_NO, KC_VOLU, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_VOLD, KC_NO, KC_NO, KC_VOLD, KC_F1, KC_F2, KC_F3, KC_F4, KC_TRNS, KC_LGUI, KC_LSFT, KC_LALT, KC_LCTL, KC_LSFT, KC_LALT, KC_LCTL, KC_RCTL, KC_RALT, KC_RSFT, KC_RCTL, KC_RALT, KC_RSFT, KC_RGUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[2] = LAYOUT(TO(0), KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_DEL, KC_NLCK, KC_P7, KC_P8, KC_P9, JP_EQL, KC_NO, KC_NO, KC_NO, LGUI(LCTL(KC_LEFT)), LGUI(LCTL(KC_RGHT)), LGUI(KC_TAB), KC_DEL, KC_NO, KC_BSPC, KC_P0, KC_P4, KC_P5, KC_P6, JP_SLSH, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_NO, KC_ENT, KC_PDOT, KC_P1, KC_P2, KC_P3, JP_COLN, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_NO, KC_LGUI, KC_NO, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_LCTL, KC_ENT, KC_SPC, KC_RSFT, KC_RCTL, KC_RALT, KC_NO, KC_RGUI, RCTL(KC_X), RCTL(KC_C), RCTL(KC_V), KC_NO, KC_NO, KC_NO),
	[3] = LAYOUT(TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_NO, LGUI(LCTL(KC_LEFT)), LGUI(LCTL(KC_RGHT)), LGUI(KC_TAB), KC_BTN3, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN4, KC_BTN5, KC_NO, KC_NO, KC_BSPC, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R, KC_BTN1, KC_NO, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_LCTL, KC_LSFT, KC_LALT, KC_ENT, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R, KC_BTN2, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(LSFT(JP_S)), LGUI(JP_V), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_NO, KC_NO, KC_TRNS, KC_BTN3, KC_BTN2, KC_BTN1, KC_RCTL, KC_RALT, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_NO, KC_NO),
	[4] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN3, KC_BTN4, KC_BTN5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, KC_NO, KC_LALT, KC_LSFT, KC_LCTL, KC_ACL2, KC_ACL1, KC_ACL0, KC_RCTL, KC_RALT, KC_RSFT, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI, KC_RALT, KC_RSFT, KC_RCTL, KC_LCTL, KC_LSFT, KC_LALT)
};

