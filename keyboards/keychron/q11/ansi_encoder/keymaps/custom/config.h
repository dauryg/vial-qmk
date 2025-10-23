/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x5C, 0x2B, 0xB4, 0x2A, 0x60, 0xB3, 0x8B, 0x46}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 9 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 7 }

#define DYNAMIC_KEYMAP_LAYER_COUNT 6

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT
