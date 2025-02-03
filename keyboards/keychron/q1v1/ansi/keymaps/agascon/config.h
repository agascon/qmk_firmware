#pragma once

#undef TAPPING_TERM
#define TAPPING_TERM 200

#define USB_SUSPEND_WAKEUP_DELAY 200

/* RGB Matrix Configuration */
#ifdef RGB_MATRIX_ENABLE
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_KEYPRESSES
#endif
