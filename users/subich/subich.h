#pragma once
#include QMK_KEYBOARD_H

#include "quantum.h"
#include "action_layer.h"
#include "action.h"

#include "version.h"
#include "wrappers.h"

#ifdef TAP_DANCE_ENABLE
#    include "tap_dances.h"
#endif

#ifdef OLED_ENABLE
#    include "oled_stuff.h"
#endif

// Each layer gets a name for readability
enum layers {
  _QWERTY,
  _COLEMAK,
  _GAME,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum custom_keycodes {
  // layer toggles
  QWERTY = SAFE_RANGE,
  COLEMAK,
  GAME,
  LOWER,
  RAISE,
  ADJUST,
  // other functions
  RGBRST,
  KC_RACL,        // right alt / colon
  KC_MAKE,        // qmk make command
  NEW_SAFE_RANGE  //use "NEW_SAFE_RANGE" for keymap specific codes
};

#define ___X___ KC_NO

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

#define CTL_ESC CTL_T(KC_ESC)
// Dual function escape with left command
#define KC_LGESC LGUI_T(KC_ESC)
