#include "su-stefan.h"

extern keymap_config_t keymap_config;

// clang-format off
#define LAYOUT_ortho_4x12_wrapper(...) LAYOUT_ortho_4x12(__VA_ARGS__)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_ortho_4x12_wrapper(
        KC_TAB,  _________________QWERTY_L1_________________, _________________QWERTY_R1_________________, KC_BSPC,
        CTL_ESC, _________________QWERTY_L2_________________, _________________QWERTY_R1_________________, KC_QUOT,
        KC_LSFT, _________________QWERTY_L3_________________, _________________QWERTY_R1_________________, KC_SFTENT,
        ___X___, KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),

    [_COLEMAK] = LAYOUT_ortho_4x12_wrapper(
        _______, _________________COLEMAK_L1________________, _________________COLEMAK_R1________________, KC_BSPC,
        _______, _________________COLEMAK_L2________________, _________________COLEMAK_R2________________, KC_QUOT,
        _______, _________________COLEMAK_L3________________, _________________COLEMAK_R3________________, KC_SFTENT,
        _______, _______, _______, _______, _______, KC_SPC,  KC_SPC,  _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),

    [_GAME] = LAYOUT_ortho_4x12_wrapper(
        KC_1,    _________________QWERTY_L1_________________, _________________QWERTY_R1_________________, KC_BSPC,
        KC_LSFT, _________________QWERTY_L2_________________, _________________QWERTY_R1_________________, KC_QUOT,
        KC_LCTL, _________________QWERTY_L3_________________, _________________QWERTY_R1_________________, KC_ENT,
        KC_LALT, KC_4,    KC_3,    KC_2,    _______, KC_SPC,  KC_SPC,  _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),

    [_LOWER] = LAYOUT_ortho_4x12_wrapper(
        KC_GRV,  _________________LOWER_L1__________________, _________________LOWER_R1__________________, KC_BSPC,
        KC_DEL,  _________________LOWER_L2__________________, _________________LOWER_R2__________________, KC_BSLS,
        KC_TAB,  _________________LOWER_L3__________________, _________________LOWER_R3__________________, KC_PMNS,
        KC_ESC,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_RAISE] = LAYOUT_ortho_4x12_wrapper(
        KC_TILD, _________________RAISE_L1__________________, _________________RAISE_R1__________________, KC_BSPC,
        KC_DEL,  _________________RAISE_L2__________________, _________________RAISE_R2__________________, ___X___,
        _______, _________________RAISE_L3__________________, _________________RAISE_R3__________________, ___X___,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_MPLY, KC_VOLD, KC_VOLU, KC_MNXT
    ),

    [_ADJUST] = LAYOUT_ortho_4x12_wrapper(
        RESET,   _________________ADJUST_L1_________________, _________________ADJUST_R1_________________, KC_DEL,
        ___X___, _________________ADJUST_L2_________________, _________________ADJUST_R2_________________, ___X___,
        ___X___, _________________ADJUST_L3_________________, _________________ADJUST_R3_________________, ___X___,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};
// clang-format on

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}
