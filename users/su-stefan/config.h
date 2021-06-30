#pragma once

#ifdef OLED_DRIVER_ENABLE
#    ifdef SPLIT_KEYBOARD
#        define OLED_UPDATE_INTERVAL 60
#    else
#        define OLED_UPDATE_INTERVAL 15
#    endif
#    define OLED_DISABLE_TIMEOUT
#    ifdef OLED_FONT_H
#        undef OLED_FONT_H
#    endif
#    define OLED_FONT_H "drashna_font.h"
#    define OLED_FONT_END 255
// #    define OLED_FONT_5X5
// #    define OLED_FONT_AZTECH
// #    define OLED_FONT_BMPLAIN
// #    define OLED_FONT_SUPER_DIGG
// #    define OLED_LOGO_GMK_BAD
// #    define OLED_LOGO_HUE_MANITEE
// #    define OLED_LOGO_CORNE
// #    define OLED_LOGO_GOTHAM
#    define OLED_LOGO_SCIFI
#endif

/* Disable unused and unneeded features to reduce on firmware size */
#ifdef LOCKING_SUPPORT_ENABLE
#    undef LOCKING_SUPPORT_ENABLE
#endif
#ifdef LOCKING_RESYNC_ENABLE
#    undef LOCKING_RESYNC_ENABLE
#endif
