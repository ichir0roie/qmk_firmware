#include QMK_KEYBOARD_H


/*
            1   2       4   5
                    3
        6
                    8
        7
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        DRAG_SCROLL,
        KC_BTN1,
        KC_BTN3,
        KC_BTN2,
        LCTL_T(KC_DEL),
        KC_BSPC,
        LT(1,KC_ENTER),
        DPI_CONFIG
    ),
    [1] = LAYOUT(
        DRAG_SCROLL,
        LGUI(LCTL(KC_LEFT)),
        KC_BTN3,
        LGUI(LCTL(KC_RIGHT)),
        LGUI(KC_TAB),
        KC_BSPC,
        KC_NO,
        DPI_CONFIG
    )
};
