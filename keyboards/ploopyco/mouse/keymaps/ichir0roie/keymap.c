#include QMK_KEYBOARD_H


/*
            1   2       4   5
                    3
        7
                    8
        6
*/

# define Bt1 KC_ENTER
# define Bt2 MS_BTN1
# define Bt3 MS_BTN3
# define Bt4 MS_BTN2
# define Bt5 LCTL_T(KC_DEL)
# define Bt6 LT(1,KC_LGUI)
# define Bt7 DRAG_SCROLL
# define Bt8 DPI_CONFIG

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        Bt1,
        Bt2,
        Bt3,
        Bt4,
        Bt5,
        Bt6,
        Bt7,
        Bt8
    ),
    [1] = LAYOUT(
        KC_NO,
        LGUI(LCTL(KC_LEFT)),
        Bt3,
        LGUI(LCTL(KC_RIGHT)),
        LGUI(KC_TAB),
        KC_NO,
        Bt7,
        QK_BOOT
    ),
    [2] = LAYOUT(
        Bt1,
        KC_VOLD,
        Bt3,
        KC_VOLU,
        KC_MUTE,
        Bt6,
        KC_NO,
        Bt8
    )
};

const uint16_t PROGMEM cmbKeys45[] = {Bt4, Bt5, COMBO_END};

combo_t key_combos[] = {
    COMBO(cmbKeys45, KC_BSPC),
};
