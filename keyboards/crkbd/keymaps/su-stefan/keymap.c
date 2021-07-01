#include QMK_KEYBOARD_H
#include "su-stefan.h"

extern keymap_config_t keymap_config;

// Custom keycodes for layer keys
// Dual function escape with left command
#define KC_LGESC LGUI_T(KC_ESC)

// clang-format off
#define LAYOUT_split_3x6_3_wrapper(...)      LAYOUT_split_3x6_3(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY]  = LAYOUT_split_3x6_3_wrapper(
    KC_TAB,  _________________QWERTY_L1_________________,                    _________________QWERTY_R1_________________, KC_BSPC,
    KC_LCTL, _________________QWERTY_L2_________________,                    _________________QWERTY_R2_________________, KC_QUOT,
    KC_LSPO, _________________QWERTY_L3_________________,                    _________________QWERTY_R3_________________, KC_RSPC,
                                     KC_LGESC, LOWER,  KC_SPC,        RCTL_T(KC_ENT), RAISE,   KC_RACL
  ),

  [_COLEMAK] = LAYOUT_split_3x6_3_wrapper(
    KC_TAB,  _________________COLEMAK_L1________________,                    _________________COLEMAK_R1________________, KC_BSPC,
    KC_LCTL, _________________COLEMAK_L2________________,                    _________________COLEMAK_R2________________, KC_QUOT,
    KC_LSPO, _________________COLEMAK_L3________________,                    _________________COLEMAK_R3________________, KC_RSPC,
                                     KC_LGESC, LOWER,  KC_SPC,        RCTL_T(KC_ENT), RAISE,   KC_RACL
  ),


  [_LOWER]   = LAYOUT_split_3x6_3_wrapper(
    KC_ESC,  _________________LOWER_L1__________________,                    _________________LOWER_R1__________________, KC_DEL,
    KC_LCTL, _________________LOWER_L2__________________,                    _________________LOWER_R2__________________, ___X___,
    KC_LSFT, _________________LOWER_L3__________________,                    _________________LOWER_R3__________________, ___X___,
                                     KC_LGUI, LOWER,   KC_SPC,        KC_ENT,   RAISE,   KC_RALT
  ),

  [_RAISE]   = LAYOUT_split_3x6_3_wrapper(
    KC_ESC,  _________________RAISE_L1__________________,                    _________________RAISE_R1__________________, KC_BSPC,
    KC_LCTL, _________________RAISE_L2__________________,                    _________________RAISE_R2__________________, KC_GRV,
    KC_LSFT, _________________RAISE_L3__________________,                    _________________RAISE_R3__________________, KC_TILD,
                                     KC_LGUI, LOWER,   KC_SPC,        KC_ENT,   RAISE,   KC_RALT
  ),

  [_ADJUST]  = LAYOUT_split_3x6_3_wrapper(
    RESET,   _________________ADJUST_L1_________________,                    _________________ADJUST_R1_________________, ___X___,
    ___X___, _________________ADJUST_L2_________________,                    _________________ADJUST_R2_________________, ___X___,
    ___X___, _________________ADJUST_L3_________________,                    _________________ADJUST_R3_________________, ___X___,
                                     KC_LGUI, LOWER,   KC_SPC,        KC_ENT,   RAISE,   KC_RALT
  )
};
// clang-format on

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

  }
  return true;
}
