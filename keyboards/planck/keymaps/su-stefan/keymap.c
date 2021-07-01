#include "planck.h"
#include "action_layer.h"
#include "su-stefan.h"

extern keymap_config_t keymap_config;

#define LAYOUT_planck_grid_wrapper(...) LAYOUT_planck_grid(__VA_ARGS__)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_planck_grid_wrapper(
    KC_TAB,  _________________QWERTY_L1_________________, _________________QWERTY_R1_________________, KC_BSPC,
    CTL_ESC, _________________QWERTY_L2_________________, _________________QWERTY_R1_________________, KC_QUOT,
    KC_LSFT, _________________QWERTY_L3_________________, _________________QWERTY_R1_________________, KC_SFTENT,
    ___X___, KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

[_COLEMAK] = LAYOUT_planck_grid_wrapper(
    _______, _________________COLEMAK_L1________________, _________________COLEMAK_R1________________, KC_BSPC,
    _______, _________________COLEMAK_L2________________, _________________COLEMAK_R2________________, KC_QUOT,
    _______, _________________COLEMAK_L3________________, _________________COLEMAK_R3________________, KC_SFTENT,
    _______, _______, _______, _______, _______, KC_SPC,  KC_SPC,  _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

[_GAME] = LAYOUT_planck_grid_wrapper(
    KC_1,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
    KC_LALT, KC_4,    KC_3,    KC_2,    _______, KC_SPC,  KC_SPC,  _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

[_LOWER] = LAYOUT_planck_grid_wrapper(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_DEL,  ___X___, ___X___, KC_EQL,  KC_MINS, KC_LBRC, KC_RBRC, KC_4,    KC_5,    KC_6,    ___X___, KC_BSLS,
    KC_TAB,  ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, KC_1,    KC_2,    KC_3,    KC_PPLS, KC_PMNS,
    KC_ESC,  _______, _______, _______, _______, _______, _______, _______, KC_0,    KC_DOT,  KC_PAST, KC_PSLS
),

[_RAISE] = LAYOUT_planck_grid_wrapper(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, ___X___, ___X___,
    _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_HOME, KC_PGUP, KC_PGDN, KC_END,  ___X___, ___X___,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_MPLY, KC_VOLD, KC_VOLU, KC_MNXT
),

[_ADJUST] = LAYOUT_planck_grid_wrapper(
    _______, RESET,   DEBUG,   CG_TOGG, AU_TOG,  _______, _______, _______, _______, _______, _______, KC_DEL,
    _______, _______, _______, _______, _______, _______, _______, QWERTY,  COLEMAK, GAME,    _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
)

};

uint32_t layer_state_set_keymap(uint32_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case COLEMAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLEMAK);
      }
      return false;
      break;
    case GAME:
        if (record->event.pressed) {
          set_single_persistent_default_layer(_GAME);
        }
        return false;
        break;
  }
  return true;
}
