SRC += su-stefan.c

TAP_DANCE_ENABLE   ?= no
RGBLIGHT_ENABLE    ?= no
RGB_MATRIX_ENABLE  ?= no
OLED_DRIVER_ENABLE ?= no

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
	SRC += tap_dances.c
endif
ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
    SRC += rgb_stuff.c
endif
ifeq ($(strip $(RGB_MATRIX_ENABLE)), yes)
	SRC += rgb_matrix_stuff.c
endif
ifeq ($(strip $(OLED_DRIVER_ENABLE)), yes)
	SRC += oled_stuff.c
endif
