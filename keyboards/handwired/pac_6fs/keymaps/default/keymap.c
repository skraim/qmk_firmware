#include QMK_KEYBOARD_H
#include "oled.c"
#include "i18n.h"

const uint16_t PROGMEM combo0[] = { KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_RALT, KC_RGUI, KC_RCTL, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_DEL, KC_LEFT, KC_DOWN, KC_RIGHT, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_L, KC_D, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_F, KC_O, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_X, KC_M, COMBO_END};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // graphite
    [0] = LAYOUT_ortho_gaming (
        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,
        QK_GESC,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINS,
        KC_TAB,         KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,      KC_QUOT,        KC_F,           KC_O,           KC_U,           KC_J,           KC_EQL,
        KC_CAPS,        ALT_T(KC_N),    LGUI_T(KC_R),   SFT_T(KC_T),    CTL_T(KC_S),    KC_G,      KC_Y,           CTL_T(KC_H),    SFT_T(KC_A),    LGUI_T(KC_E),   ALT_T(KC_I),    KC_QUOT,
        KC_LSFT,        KC_Q,           KC_X,           KC_M,           KC_C,           KC_V,      KC_K,           KC_P,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_RSFT,
        KC_LCTL,        MO(3),          KC_LGUI,        ALT_T(KC_ESC),          KC_SPC,            LT(2, KC_ENT),  KC_BSPC,        KC_DEL,         KC_RALT,        KC_RGUI,        KC_RCTL
    ),

    // qwerty
    [1] = LAYOUT_ortho_gaming (
        KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,  KC_F6,
        QK_GESC,    KC_1,       KC_2,       KC_3,       KC_4,   KC_5,   KC_6,   KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,   KC_T,   KC_Y,   KC_U,       KC_I,       KC_O,       KC_P,       KC_EQL,
        KC_CAPS,    KC_A,       KC_S,       KC_D,       KC_F,   KC_G,   KC_H,   KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,   KC_B,   KC_N,   KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,
        KC_LCTL,    MO(4),      KC_LGUI,    ALT_T(KC_ESC),  KC_SPC,     KC_ENT, KC_BSPC,    KC_DEL,     KC_RALT,    KC_RGUI,    KC_RCTL
    ),

    // arrows
    [2] = LAYOUT_ortho_gaming (
        _______,    _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_UP,      _______,
        _______,    _______,    _______,    _______,        _______,            _______,    _______,    _______,    KC_LEFT,    KC_DOWN,    KC_RIGHT
    ),

    // graphite-symb
    [3] = LAYOUT_ortho_gaming (
        KC_F7,      KC_F8,          KC_F9,          KC_F10,         KC_F11,             KC_F12,
        QK_GESC,    KC_1,           KC_2,           KC_3,           KC_4,               KC_5,       KC_6,       KC_7,           KC_8,           KC_9,           KC_0,       KC_MINS,
        DF(1),      KC_EXLM,        KC_AT,          KC_HASH,        KC_DOLLAR,          KC_PERC,    KC_CIRC,    KC_AMPR,        KC_ASTR,        KC_QUES,        KC_QUOT,       KC_EQL,
        KC_CAPS,    ALT_T(KC_PLUS), GUI_T(KC_EQL),  SFT_T(KC_LPRN), CTL_T(KC_RPRN),     KC_DQT,     KC_COLN,    CTL_T(KC_LBRC), SFT_T(KC_RBRC), GUI_T(KC_LCBR), ALT_T(KC_RCBR),KC_QUOT,
        KC_LSFT,    KC_LT,          KC_PIPE,        KC_PMNS, KC_GT, KC_BSLS,            KC_GRV,     KC_UNDS,    KC_SLSH,        KC_TILD,        KC_SCLN,        KC_RSFT,
        KC_LCTL,    _______,          KC_LGUI,        KC_LALT,        KC_SPC,             KC_ENT,     KC_BSPC,    KC_DEL,         KC_RALT,        KC_RGUI,        KC_RCTL
    ),

    // qwerty-secondary
    [4] = LAYOUT_ortho_gaming (
        KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11, KC_F12,
        QK_GESC,    KC_1,       KC_2,       KC_3,       KC_4,   KC_5,   KC_6,   KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,
        DF(0),      KC_Q,       KC_W,       KC_E,       KC_R,   KC_T,   KC_Y,   KC_U,       KC_I,       KC_O,       KC_P,       KC_EQL,
        KC_CAPS,    KC_A,       KC_S,       KC_D,       KC_F,   KC_G,   KC_H,   KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,   KC_B,   KC_N,   KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,
        KC_LCTL,    _______,      KC_LGUI,    KC_LALT,        KC_SPC,     KC_ENT, KC_BSPC,    KC_DEL,     KC_RALT,    KC_RGUI,    KC_RCTL
    )
};

combo_t key_combos[] = {
    COMBO(combo0, UA_32),
    COMBO(combo1, UA_33),
    COMBO(combo2, UA_34),
    COMBO(combo3, UA_35),
    COMBO(combo4, UA_36),
    COMBO(combo5, TG(2)),
    COMBO(combo6, TG(2)),
    COMBO(combo7, UA_32),
    COMBO(combo8, UA_33),
    COMBO(combo9, UA_34),
    COMBO(combo10, UA_36)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ALT_T(KC_PLUS):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_PLUS);
                return false;
            }
            break;
        case SFT_T(KC_LPRN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LPRN);
                return false;
            }
            break;
        case CTL_T(KC_RPRN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_RPRN);
                return false;
            }
            break;
        case GUI_T(KC_LCBR):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LCBR);
                return false;
            }
            break;
        case ALT_T(KC_RCBR):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_RCBR);
                return false;
            }
            break;
    }
    return true;
}
