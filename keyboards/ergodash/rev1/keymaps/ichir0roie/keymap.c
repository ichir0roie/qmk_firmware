#include <keymap_jp.h>
#include <sendstring_jis.h>


enum custom_keycodes {
        QMKBEST = SAFE_RANGE
    };



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:if (record->event.pressed) SEND_STRING("QMK is the best thing ever!");break;
    }
    return true;
};

const key_override_t shift_top_0 = ko_make_basic(MOD_MASK_SHIFT, JP_ASTR, JP_TILD );//*~
const key_override_t shift_top_1 = ko_make_basic(MOD_MASK_SHIFT, JP_PLUS, JP_DLR );//+$
const key_override_t shift_top_2 = ko_make_basic(MOD_MASK_SHIFT, JP_MINS, JP_PERC );//-%
const key_override_t shift_top_3 = ko_make_basic(MOD_MASK_SHIFT, JP_QUOT, JP_CIRC );//'^
const key_override_t shift_top_4 = ko_make_basic(MOD_MASK_SHIFT, JP_DQUO, JP_GRV );//"
const key_override_t shift_top_5 = ko_make_basic(MOD_MASK_SHIFT, JP_BSLS, JP_AT );//
const key_override_t shift_top_6 = ko_make_basic(MOD_MASK_SHIFT, JP_UNDS, JP_HASH );//
//
// const key_override_t to4 = ko_make_basic(MOD_MASK_SHIFT, JP_QUOT, JP_GRV );//\_

// const key_override_t shift_top_0 = ko_make_basic(MOD_MASK_SHIFT, JP_PLUS, JP_MINS );//+-
// const key_override_t shift_top_1 = ko_make_basic(MOD_MASK_SHIFT, JP_DQUO, JP_ASTR );//"*
// const key_override_t shift_top_2 = ko_make_basic(MOD_MASK_SHIFT, JP_QUOT, JP_HASH );//'#
// const key_override_t shift_top_3 = ko_make_basic(MOD_MASK_SHIFT, JP_UNDS, JP_AT );//_@
// const key_override_t shift_top_4 = ko_make_basic(MOD_MASK_SHIFT, JP_PERC, JP_TILD );//%~
// const key_override_t shift_top_5 = ko_make_basic(MOD_MASK_SHIFT, JP_DLR, JP_CIRC );//$^

const key_override_t shift_right_0 = ko_make_basic(MOD_MASK_SHIFT, JP_EQL, JP_EXLM );//=!
const key_override_t shift_right_1 = ko_make_basic(MOD_MASK_SHIFT, JP_SCLN, JP_AMPR );//;&
const key_override_t shift_right_2 = ko_make_basic(MOD_MASK_SHIFT, JP_COLN, JP_QUES );//:?
const key_override_t shift_right_3 = ko_make_basic(MOD_MASK_SHIFT, JP_SLSH, JP_PIPE );// /|
const key_override_t shift_br_0 = ko_make_basic(MOD_MASK_SHIFT, JP_LPRN, JP_RPRN );//()
const key_override_t shift_br_1 = ko_make_basic(MOD_MASK_SHIFT, JP_LCBR, JP_RCBR );//{}
const key_override_t shift_br_2 = ko_make_basic(MOD_MASK_SHIFT, JP_LBRC, JP_RBRC );//[]

// const key_override_t to = ko_make_basic(MOD_MASK_SHIFT, JP_, JP_ );

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &shift_top_0,
    &shift_top_1,
    &shift_top_2,
    &shift_top_3,
    &shift_top_4,
    &shift_top_5,
    &shift_top_6,
    &shift_right_0,
    &shift_right_1,
    &shift_right_2,
    &shift_right_3,
    &shift_br_0,
    &shift_br_1,
    &shift_br_2,
    NULL  // Null terminate the array of overrides!
};

#include <keymapAG.c>

