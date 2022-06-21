#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by csvToKeyMap.
 * You may or may not want to edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
		JP_AT, JP_ASTR, JP_PLUS, JP_MINS, JP_DQUO, JP_QUOT, KC_NO, RESET, RESET, KC_NO, JP_UNDS, JP_BSLS, JP_LPRN, JP_LCBR, JP_LBRC, JP_HASH,
		KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, LGUI(KC_V), LCA(KC_V), LGUI(LSFT(JP_S)), KC_Y, KC_U, KC_I, KC_O, KC_P, JP_EQL,
		KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, LGUI(LCTL(KC_LEFT)), KC_UP, LGUI(LCTL(KC_RGHT)), KC_H, KC_J, KC_K, KC_L, JP_SCLN, JP_COLN,
		KC_LGUI,KC_GRV, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_INS, KC_DEL, KC_N, KC_M, KC_COMM, KC_DOT, JP_SLSH,KC_GRV, KC_RGUI,
		KC_LALT, KC_LCTL, LSFT_T(KC_SPC), LT(1, KC_BSPC), KC_DOWN, LT(2, KC_GRV), LSFT_T(KC_ENT), KC_RCTL, KC_RALT
    ),
    [1] = LAYOUT(
		KC_SPC, KC_ACL2, KC_ACL1, KC_ACL0, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R, KC_NO,
		KC_DEL, KC_NUM, KC_P7, KC_P8, KC_P9, KC_PEQL, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R, KC_BTN2,
		KC_BSPC, KC_P0, KC_P4, KC_P5, KC_P6, KC_PSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_NO,
		KC_LGUI, KC_ENT, KC_PDOT, KC_P1, KC_P2, KC_P3, JP_COLN, KC_BSPC, KC_DEL, KC_NO, KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_RGUI, KC_RGUI,
		KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_NO, KC_GRV, LSFT_T(KC_ENT), KC_RCTL, KC_RALT
    ),
    [2] = LAYOUT(
		KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_PSCR, KC_NO, KC_NO, KC_PAUS, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,
		KC_NUM, KC_F9, KC_F10, KC_F11, KC_F12, KC_MUTE, KC_INT2, KC_NO, KC_INT2, KC_MUTE, KC_F9, KC_F10, KC_F11, KC_F12,
		KC_NUM, KC_CAPS, KC_F5, KC_F6, KC_F7, KC_F8, KC_VOLU, KC_INT4, KC_NO, KC_INT4, KC_VOLU, KC_F5, KC_F6, KC_F7, KC_F8, KC_CAPS,
		KC_LGUI, KC_SCRL, KC_F1, KC_F2, KC_F3, KC_F4, KC_VOLD, KC_INT5, KC_INT5, KC_VOLD, KC_F1, KC_F2, KC_F3, KC_F4, KC_SCRL, KC_RGUI,
		KC_LALT, KC_LCTL, KC_LSFT, KC_LALT, KC_NO, KC_TRNS, KC_RSFT, KC_RCTL, KC_RALT
    ),
};

