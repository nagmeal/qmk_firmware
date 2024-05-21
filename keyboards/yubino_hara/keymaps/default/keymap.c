// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_7x4(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_MINS,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MS_L,          KC_MS_R, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ESC,
                                            KC_LGUI, TL_LOWR, KC_SPC,           KC_ENT,  TL_UPPR, KC_RALT
    ),
    [1] = LAYOUT_split_7x4(
        KC_TAB,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
        KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LGUI(KC_SPC),                       KC_QUOT, KC_EQL,  KC_BSLS, KC_LBRC, KC_RBRC, KC_GRV,
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LNG2,  _______,         _______, KC_UNDS, KC_PLUS, KC_PIPE, KC_LCBR, KC_RCBR, KC_TILD,
                                            _______, _______,  _______,         _______,  _______, _______
    ),
    [2] = LAYOUT_split_7x4(
        KC_TAB,  XXXXXXX,    KC_7,    KC_8,    KC_9, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LCTL, XXXXXXX,    KC_4,    KC_5,    KC_6, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LSFT, KC_LALT,    KC_1,    KC_2,    KC_3,    KC_0,  _______,         _______, KC_LNG1, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                            _______, _______,  _______,         _______,  _______, _______
    ),
    [3] = LAYOUT_split_7x4(
          KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                              KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
        KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  _______,         _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                            _______, _______,  _______,         _______,  _______, _______
    ),
};
