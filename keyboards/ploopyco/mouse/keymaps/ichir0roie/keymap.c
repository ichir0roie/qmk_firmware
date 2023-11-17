#include QMK_KEYBOARD_H


/*
            1   2       4   5
                    3
        7
                    8
        6
*/

# define Bt1 KC_ENTER
# define Bt2 KC_BTN1
# define Bt3 KC_BTN3
# define Bt4 KC_BTN2
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
        RESET
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

// name rule -> bt 4,5,1,2,NO,3
const uint16_t PROGMEM cmbKeys12[] = {Bt1, Bt2, COMBO_END};
const uint16_t PROGMEM cmbKeys23[] = {Bt2, Bt3, COMBO_END};
const uint16_t PROGMEM cmbKeys13[] = {Bt1, Bt3, COMBO_END};
const uint16_t PROGMEM cmbKeys45[] = {Bt4, Bt5, COMBO_END};
const uint16_t PROGMEM cmbKeys41[] = {Bt4, Bt1, COMBO_END};
const uint16_t PROGMEM cmbKeys51[] = {Bt5, Bt1, COMBO_END};
const uint16_t PROGMEM cmbKeys52[] = {Bt5, Bt2, COMBO_END};
// const uint16_t PROGMEM test_combo2[] = {KC_C, KC_D, COMBO_END};

enum combos{
    // CMB12,
    // CMB23,
    // CMB13,
    CMB45,
    // CMB41,
    // CMB51,
    // CMB52,
};
combo_t key_combos[COMBO_COUNT] = {
    // [CMB12]=COMBO(cmbKeys12, LGUI(KC_TAB)),
    // [CMB23]=COMBO(cmbKeys23, KC_BSPC),
    // [CMB13]=COMBO(cmbKeys13, KC_ESC),
    [CMB45]=COMBO(cmbKeys45, KC_BSPC),
    // [CMB41]=COMBO(cmbKeys41, TO(3)),
    // [CMB51]=COMBO(cmbKeys51, RESET),
    // [CMB52]=COMBO(cmbKeys52, KC_BSPC),
    // [TO_Game]=COMBO(toGameMode,TO(3)),
    // COMBO(test_combo2, LCTL(KC_Z)), // keycodes with modifiers are possible too!
};