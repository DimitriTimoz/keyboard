#ifndef KEYMAP_H
#define KEYMAP_H
#include <Arduino.h>
#include "keybind.h"
// 21 x 6


const uint16_t PROGMEM keymaps[] = {
    K_ESC, K_F1, K_F2, K_F3, K_F4, K_F5, K_F6, K_F7, K_F8, K_F9, K_F10, K_F11, K_F12, 0x100,                  0x101, 0x102, 0x103,   0x104, 0x105   , 0x106, 0x107,
    K_AT,  K_1,  K_2,  K_3,  K_4,  K_5,  K_6,  K_7,  K_8,  K_9 , K_0  , K_BRACKET_CLOSE, K_DASH, K_BACKSPACE, 0x108, 0x109, 0x10a,   KP_NUM, KP_SLASH,KP_MULT, KP_MINUS,  
    K_TAB, K_A,  K_Z,  K_E,  K_R,  K_T,  K_Y,  K_U,  K_I,  K_O,  K_P  , K_HAT,           K_DOLLAR, K_ENTER,   K_DEL, 0x10b, 0x10c,   KP_7,   KP_8,    KP_9,    KP_PLUS,
    K_CAPS_LOCK, K_Q, K_S, K_D, K_F, K_G, K_H, K_J, K_K, K_L, K_M, K_PERCENT, K_POUND,      0,                0,      0,    0,       KP_4,   KP_5,    KP_6,     0,
    K_LEFT_SHIFT, K_LESS_SIGN, K_W, K_X, K_C, K_V, K_B, K_N, K_COMMA, K_DOT, K_DASH, K_PLUS, K_RIGHT_SHIFT,   0,      K_UPARR,0,     KP_1,   KP_2,    KP_3,    KP_ENTER,
    K_FN, K_LEFT_CTRL, K_LEFT_ALT, K_LEFT_GUI, K_SPACE, K_RIGHT_GUI, K_RIGHT_ALT, K_FN, 0x10d, 0x10e,         K_LARR,K_DWARR, K_RARR,KP_0,   KP_DOT, 0,         0
};

#endif 