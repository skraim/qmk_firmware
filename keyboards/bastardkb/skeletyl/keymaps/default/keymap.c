/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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
#include "keymap_ukrainian.h"
#include "i18n.h"

const uint16_t PROGMEM combo0[] = { MT(MOD_LALT, KC_R), MT(MOD_LSFT, KC_S), MT(MOD_LCTL, KC_T), COMBO_END};
const uint16_t PROGMEM combo1[] = { MT(MOD_LCTL, KC_N), MT(MOD_LSFT, KC_E), MT(MOD_LALT, KC_I), COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_split_3x5_3(
            KC_Q,
            KC_W,
            KC_F,
            KC_P,
            KC_B,
            KC_J,
            KC_L,
            KC_U,
            KC_Y,
            KC_SCLN,

            RGUI_T(KC_A),
            ALT_T(KC_R),
            SFT_T(KC_S),
            CTL_T(KC_T),
            KC_G,
            KC_M,
            CTL_T(KC_N),
            SFT_T(KC_E),
            ALT_T(KC_I),
            RGUI_T(KC_O),

            KC_Z,
            KC_X,
            KC_C,
            KC_D,
            KC_V,
            KC_K,
            KC_H,
            KC_COMM,
            KC_DOT,
            KC_SLSH,

            LT(1, KC_ESC),
            LT(2, KC_SPC),
            LT(3, KC_TAB),

            LT(4, KC_ENT),
            LT(2, KC_BSPC),
            LT(5, KC_DEL)
  ),

  [1] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      /* KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, */
  /* //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------| */
      /* XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, */
  /* //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------| */
      /* XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, */
  /* //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------| */
      /*                                     KC_LGUI, KC_SPC,  _______,     MO(3), KC_ENT, KC_RALT */
            KC_TRNS,
            KC_TRNS,
            KC_TRNS,
            KC_TRNS,
            KC_TRNS,
            KC_PLUS,
            KC_7,
            KC_8,
            KC_9,
            KC_ASTR,

            KC_TRNS,
            KC_TRNS,
            KC_TRNS,
            KC_TRNS,
            KC_TRNS,
            KC_MINS,
            KC_4,
            KC_5,
            KC_6,
            KC_SLSH,

            KC_TRNS,
            KC_TRNS,
            KC_TRNS,
            KC_TRNS,
            KC_TRNS,
            KC_DOT,
            KC_1,
            KC_2,
            KC_3,
            KC_EQL,

            KC_TRNS,
            KC_TRNS,
            KC_TRNS,

            KC_TRNS,
            KC_0,
            KC_COMM
  ),

  [2] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      /* KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, */
  /* //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------| */
      /* XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, */
  /* //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------| */
      /* XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, */
  /* //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------| */
      /*                                     KC_LGUI,  KC_SPC,  MO(3),     _______, KC_ENT, KC_RALT */
                                      //`--------------------------'  `--------------------------'
            KC_EXLM,
            KC_AT,
            KC_HASH,
            KC_DOLLAR,
            KC_PERC,
            KC_CIRC,
            KC_AMPR,
            KC_ASTR,
            KC_QUES,
            KC_QUOT,

            KC_PLUS,
            KC_EQL,
            KC_LPRN,
            KC_RPRN,
            KC_DQT,
            KC_COLN,
            KC_LBRC,
            KC_RBRC,
            KC_LCBR,
            KC_RCBR,

            KC_LT,
            KC_PIPE,
            KC_PMNS,
            KC_GT,
            KC_BSLS,
            KC_GRV,
            KC_UNDS,
            KC_SLSH,
            KC_TILD,
            KC_SCLN,

            KC_TRNS,
            KC_TRNS,
            KC_TRNS,

            KC_TRNS,
            KC_TRNS,
            KC_TRNS
  ),

  [3] = LAYOUT_split_3x5_3(
            KC_Q,
            KC_W,
            KC_F,
            KC_P,
            KC_B,
            KC_PSCR,
            KC_F7,
            KC_F8,
            KC_F9,
            KC_F10,

            RGUI_T(KC_A),
            ALT_T(KC_R),
            SFT_T(KC_S),
            CTL_T(KC_T),
            KC_G,
            CW_TOGG,
            KC_F4,
            KC_F5,
            KC_F6,
            KC_F11,

            KC_Z,
            KC_X,
            KC_C,
            KC_D,
            KC_V,
            KC_K,
            KC_F1,
            KC_F2,
            KC_F3,
            KC_F12,

            KC_TRNS,
            KC_TRNS,
            KC_TRNS,

            KC_TRNS,
            KC_TRNS,
            KC_TRNS

  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      /* XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, */
  /* //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------| */
      /* RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, */
  /* //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------| */
      /* RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, */
  /* //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------| */
      /*                                     KC_LGUI,  KC_SPC, _______,     _______, KC_ENT, KC_RALT */
                                      //`--------------------------'  `--------------------------'
  ),

  [4] = LAYOUT_split_3x5_3(
            KC_Q,
            KC_W,
            KC_F,
            KC_P,
            KC_B,
            KC_J,
            KC_END,
            KC_HOME,
            KC_Y,
            KC_SCLN,

            RGUI_T(KC_A),
            ALT_T(KC_R),
            SFT_T(KC_S),
            CTL_T(KC_T),
            KC_G,
            KC_LEFT,
            KC_DOWN,
            KC_UP,
            KC_RIGHT,
            KC_O,

            KC_Z,
            KC_X,
            KC_C,
            KC_D,
            KC_V,
            KC_K,
            KC_PGDN,
            KC_PGUP,
            KC_DOT,
            KC_SLSH,

            KC_TRNS,
            KC_TRNS,
            KC_TRNS,

            KC_TRNS,
            KC_TRNS,
            KC_TRNS
  ),

  [5] = LAYOUT_split_3x5_3(
            QK_CLEAR_EEPROM,
            KC_W,
            KC_VOLU,
            UG_NEXT,
            UG_TOGG,
            KC_J,
            KC_L,
            KC_U,
            KC_Y,
            KC_SCLN,

            UG_VALU,
            KC_MPRV,
            KC_VOLD,
            KC_MNXT,
            UG_HUEU,
            KC_M,
            CTL_T(KC_N),
            SFT_T(KC_E),
            ALT_T(KC_I),
            RGUI_T(KC_O),

            UG_SPDU,
            KC_X,
            KC_MUTE,
            KC_D,
            UG_SATU,
            KC_K,
            KC_H,
            KC_COMM,
            KC_DOT,
            TG(6),

            LT(1, KC_ESC),
            KC_MPLY,
            LT(3, KC_TAB),

            LT(4, KC_ENT),
            LT(2, KC_BSPC),
            LT(5, KC_DEL)
  ),

    [6] = LAYOUT_split_3x5_3(
            KC_W,
            KC_L,
            KC_Y,
            KC_P,
            KC_B,
            KC_Z,
            KC_F,
            KC_O,
            KC_U,
            KC_QUOT,

            RGUI_T(KC_C),
            ALT_T(KC_R),
            SFT_T(KC_S),
            CTL_T(KC_T),
            KC_G,
            KC_M,
            CTL_T(KC_N),
            SFT_T(KC_E),
            ALT_T(KC_I),
            RGUI_T(KC_A),

            KC_Q,
            KC_J,
            KC_V,
            KC_D,
            KC_K,
            KC_X,
            KC_H,
            KC_SLSH,
            KC_COMM,
            KC_DOT,

        TG(6),
            LT(2, KC_SPC),
            LT(3, KC_TAB),

            LT(4, KC_ENT),
            LT(2, KC_BSPC),
            LT(5, KC_DEL)
  )
};


combo_t key_combos[] = {
    COMBO(combo0, KC_LEFT_GUI),
    COMBO(combo1, KC_LEFT_GUI),
    COMBO(combo2, UA_32),
    COMBO(combo3, UA_33),
    COMBO(combo4, UA_34),
    COMBO(combo5, UA_35),
    COMBO(combo6, UA_36),
};

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        case KC_A ... KC_Z:
        case KC_MINS:
        case KC_RBRC:
        case KC_LBRC:
        case KC_BSLS:
        case KC_QUOT:
            add_weak_mods(MOD_BIT(KC_LSFT));
            return true;

        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
        case KC_GRV:
            return true;

        default:
            return false;
    }
}

