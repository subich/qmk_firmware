#pragma once
#include "quantum.h"
#include "action.h"
#include "version.h"
#include "wrappers.h"

// Each layer gets a name for readability
enum layers {
  _QWERTY,
  _COLEMAK,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  LOWER,
  RAISE,
  ADJUST,
  RGBRST,
  KC_RACL, // right alt / colon
  KC_MAKE,
  NEW_SAFE_RANGE  //use "NEW_SAFE_RANGE" for keymap specific codes
};

#define _______ KC_TRNS
#define ___X___ KC_NO

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

#define CTL_ESC CTL_T(KC_ESC)
