#ifndef WEENSYOS_SCHEDOS_H
#define WEENSYOS_SCHEDOS_H
#include "types.h"

/*****************************************************************************
 * schedos.h
 *
 *   Constants and variables shared by SchedOS's kernel and applications.
 *
 *****************************************************************************/

// System call numbers.
// An application calls a system call by causing the specified interrupt.

#define INT_SYS_YIELD		48
#define INT_SYS_EXIT		49
#define INT_SYS_USER1		50
#define INT_SYS_USER2		51
#define INT_SET_PRIORITY        52
#define INT_ACQ_LOCK            53
#define INT_RELEASE_LOCK        54
#define INT_SET_SHARE           55
#define MIN_PRIORITY    1
#define MAX_PRIORITY    20
// The current screen cursor position (stored at memory location 0x198000).

extern uint16_t * volatile cursorpos;

#endif
