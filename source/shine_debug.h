#ifndef SHINE_DEBUG_H
#define SHINE_DEBUG_H

#ifdef DEBUG_SHINE
#include "hal.h"
#include "chprintf.h"
#include "ch.h"

/* Use SD1 (the same UART as protocol) for debug output */
#define SHINE_DEBUG(fmt, ...) \
    chprintf((BaseSequentialStream *)&SD1, "[SHINE] " fmt "\r\n", ##__VA_ARGS__)

#else
/* When DEBUG_SHINE is not defined, strip out debug calls */
#define SHINE_DEBUG(fmt, ...) do {} while (0)
#endif

#endif /* SHINE_DEBUG_H */