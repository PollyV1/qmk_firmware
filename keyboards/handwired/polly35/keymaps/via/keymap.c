// Copyright 2023 %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_SPC,  KC_BSPC, MO(2),   MO(1)
    ),
    [1] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_LSFT, KC_MPLY, KC_VOLD, KC_VOLU, _______, KC_LT,   KC_GT,   KC_QUES, KC_RSFT,
        _______, _______, KC_SPC,  KC_BSPC, _______, _______
    ),
    [2] = LAYOUT(
        KC_Q,    KC_1,    KC_2,    KC_3,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_DOT,  KC_RGHT,
        _______, _______, KC_SPC,  KC_ESC,  _______, _______
    ),
    [3] = LAYOUT(
        KC_ESC,  _______, _______, _______, _______, _______, _______, _______, _______, KC_BSPC,
        KC_TAB,  _______, _______, _______, _______, _______, _______, _______, _______, KC_ENT,
        KC_LSFT, _______, _______, _______, _______, _______, _______, _______, KC_RSFT,
        _______, _______, _______, _______, _______, _______
    ),
    [4] = LAYOUT(
        QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, KC_SPC,  _______, _______, _______
    )
};
