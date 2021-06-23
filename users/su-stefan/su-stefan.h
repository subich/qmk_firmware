#include "wrappers.h"

enum layers {
  _QWERTY,
  _COLEMAK,
  _GAME,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  GAME
};

#define _______ KC_TRNS
#define ___X___ KC_NO

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

#define CTL_ESC CTL_T(KC_ESC)