#ifndef KEYBIND_H
#define KEYBIND_H
#include "config.h"
#include <Arduino.h>
#include <map>



const uint8_t KP_NUM = 0x1e; // AZERTY 
const uint8_t KP_MULT = 0x1e; // AZERTY 
const uint8_t KP_MINUS = 0x1e; // AZERTY 
const uint8_t KP_SLASH = 0x1e; // AZERTY 

const uint8_t KP_7 = 0x1e;  
const uint8_t KP_8 = 0x1e;  
const uint8_t KP_9 = 0x1e;  

const uint8_t KP_4 = 0x1e;  
const uint8_t KP_5 = 0x1e;  
const uint8_t KP_6 = 0x1e;  

const uint8_t KP_3 = 0x1e;  
const uint8_t KP_2 = 0x1e;  
const uint8_t KP_1 = 0x1e;  

const uint8_t KP_0 = 0x1e;  
const uint8_t KP_DOT = 0x1e;  

const uint8_t KP_PLUS = 0x1e;  
const uint8_t KP_ENTER = 0x1e;  


const uint8_t K_FN = 0x1e;  

// KEYS AZERTY

const uint8_t K_1 = 0x1e; // AZERTY 
const uint8_t K_2 = 0x1f; // AZERTY
const uint8_t K_3 = 0x20; // AZERTY
const uint8_t K_4 = 0x21; // AZERTY
const uint8_t K_5 = 0x22; // AZERTY
const uint8_t K_6 = 0x23; // AZERTY
const uint8_t K_7 = 0x24; // AZERTY
const uint8_t K_8 = 0x25; // AZERTY
const uint8_t K_9 = 0x26; // AZERTY
const uint8_t K_0 = 0x27; // AZERTY

const uint8_t K_A = 0x14; // AZERTY 
const uint8_t K_B = 0x05;
const uint8_t K_C = 0x06;
const uint8_t K_D = 0x07;
const uint8_t K_E = 0x08;
const uint8_t K_F = 0x09;
const uint8_t K_G = 0x0A;
const uint8_t K_H = 0x0B;
const uint8_t K_I = 0x0C;
const uint8_t K_J = 0x0D;
const uint8_t K_K = 0x0E;
const uint8_t K_L = 0x0F;
const uint8_t K_M = 0x33; // AZERTY
const uint8_t K_N = 0x11;
const uint8_t K_O = 0x12;
const uint8_t K_P = 0x13;
const uint8_t K_Q = 0x04; // AZERTY
const uint8_t K_R = 0x15;
const uint8_t K_S = 0x16;
const uint8_t K_T = 0x17;
const uint8_t K_U = 0x18;
const uint8_t K_V = 0x19;
const uint8_t K_W = 0x1d; // AZERTY
const uint8_t K_X = 0x1b; // AZERTY
const uint8_t K_Y = 0x1a; // AZERTY
const uint8_t K_Z = 0x22; // AZERTY

const uint8_t K_COMMA = 0x10; // AZERTY 

const uint8_t K_ENTER = 0x28; 
const uint8_t K_ESC = 0x29; 
const uint8_t K_DEL = 0x2a; 
const uint8_t K_TAB = 0x2b; 
const uint8_t K_SPACE = 0x2c; 

const uint8_t K_BRACKET_CLOSE = 0x2d;  // AZERTY
const uint8_t K_DASH = 0x2e; // AZERTY
const uint8_t K_BRACKET_DASH = 0x2e;  // AZERTY

const uint8_t K_HAT = 0x2f; // AZERTY
const uint8_t K_DOLLAR = 0x30; // AZERTY
const uint8_t K_POUND = 0x31; // AZERTY
const uint8_t K_POUND2 = 0x32; // AZERTY

const uint8_t K_PERCENT = 0x34; // AZERTY
const uint8_t K_LESS_SIGN = 0x35; // AZERTY
const uint8_t K_DOT = 0x36; // AZERTY
const uint8_t K_SLASH = 0x37; // AZERTY
const uint8_t K_PLUS = 0x38; // AZERTY
const uint8_t K_CAPS_LOCK = 0x39; // AZERTY

const uint8_t K_RARR = 0x4f;  
const uint8_t K_LARR = 0x50;  
const uint8_t K_DWARR = 0x51;  
const uint8_t K_UPARR = 0x52;  


const uint8_t K_LEFT_CTRL = 0x80;
const uint8_t K_LEFT_SHIFT = 0x81;
const uint8_t K_LEFT_ALT = 0x82;
const uint8_t K_LEFT_GUI = 0x83;
const uint8_t K_RIGHT_CTRL = 0x84;
const uint8_t K_RIGHT_SHIFT = 0x85;
const uint8_t K_RIGHT_ALT = 0x86;
const uint8_t K_RIGHT_GUI = 0x87;

const uint8_t K_UP_ARROW = 0xDA;
const uint8_t K_DOWN_ARROW = 0xD9;
const uint8_t K_LEFT_ARROW = 0xD8;
const uint8_t K_RIGHT_ARROW = 0xD7;
const uint8_t K_BACKSPACE = 0xB2;
const uint8_t K_RETURN = 0xB0;
const uint8_t K_INSERT = 0xD1;
const uint8_t K_PRTSC = 0xCE;
const uint8_t K_DELETE = 0xD4;
const uint8_t K_PAGE_UP = 0xD3;
const uint8_t K_PAGE_DOWN = 0xD6;
const uint8_t K_HOME = 0xD2;
const uint8_t K_END = 0xD5;
const uint8_t K_F1 = 0x3a;
const uint8_t K_F2 = 0x3b;
const uint8_t K_F3 = 0x3c;
const uint8_t K_F4 = 0x3d;
const uint8_t K_F5 = 0x3e;
const uint8_t K_F6 = 0x3f;
const uint8_t K_F7 = 0x40;
const uint8_t K_F8 = 0x41;
const uint8_t K_F9 = 0x42;
const uint8_t K_F10 = 0x43;
const uint8_t K_F11 = 0x44;
const uint8_t K_F12 = 0x45;

const uint8_t K_AT = 0x64; // AZERTY 

const uint8_t K_NUM_0 = 0xEA;
const uint8_t K_NUM_1 = 0xE1;
const uint8_t K_NUM_2 = 0xE2;
const uint8_t K_NUM_3 = 0xE3;
const uint8_t K_NUM_4 = 0xE4;
const uint8_t K_NUM_5 = 0xE5;
const uint8_t K_NUM_6 = 0xE6;
const uint8_t K_NUM_7 = 0xE7;
const uint8_t K_NUM_8 = 0xE8;
const uint8_t K_NUM_9 = 0xE9;
const uint8_t K_NUM_SLASH = 0xDC;
const uint8_t K_NUM_ASTERISK = 0xDD;
const uint8_t K_NUM_MINUS = 0xDE;
const uint8_t K_NUM_PLUS = 0xDF;
const uint8_t K_NUM_ENTER = 0xE0;
const uint8_t K_NUM_PERIOD = 0xEB;

//  Low level key report: up to 6 keys and shift, ctrl etc at once
typedef struct KeyReport
{
    uint8_t modifiers;
    uint8_t reserved;
    uint8_t keys[6];
    KeyReport();
    KeyReport(uint8_t key);
    KeyReport(uint8_t mod, uint8_t key);
}KeyReport;



const uint8_t LEFT_CTRL = 0b00000001;
const uint8_t LEFT_SHIFT = 0b00000010;
const uint8_t LEFT_OPT = 0b00000100;
const uint8_t LEFT_CMD = 0b00001000;
const uint8_t RIGHT_CTRL = 0b00010000;
const uint8_t RIGHT_SHIFT = 0b00100000;
const uint8_t RIGHT_OPT = 0b01000000;
const uint8_t RIGHT_CMD = 0b10000000;

static std::map<wchar_t, KeyReport> keybind = {
    { L'æ', KeyReport(LEFT_OPT, K_A) },                  // opt + a
    { L'Æ', KeyReport(LEFT_OPT | LEFT_SHIFT, K_A) },     // opt + shif + a
    { L'Â', KeyReport(LEFT_OPT, K_Z) },                  // opt + z
    { L'Å', KeyReport(LEFT_OPT | LEFT_SHIFT, K_Z) },     // opt + shift + z
    { L'ê', KeyReport(LEFT_OPT, K_E) },                  // opt + e
    { L'Ê', KeyReport(LEFT_OPT | LEFT_SHIFT, K_E) },     // opt + shift + e
    { L'®', KeyReport(LEFT_OPT, K_R) },                  // opt + r
    { L'‚', KeyReport(LEFT_OPT | LEFT_SHIFT, K_R) },     // opt + shift + r
    { L'†', KeyReport(LEFT_OPT, K_T) },                  // opt + t
    { L'™', KeyReport(LEFT_OPT | LEFT_SHIFT, K_T) },     // opt + shift + t
    { L'º', KeyReport(LEFT_OPT, K_U) },                  // opt + u
    { L'ª', KeyReport(LEFT_OPT | LEFT_SHIFT, K_U) },     // opt + shift + u
    { L'î', KeyReport(LEFT_OPT, K_I) },                  // opt + i
    { L'ï', KeyReport(LEFT_OPT | LEFT_SHIFT, K_I) },     // opt + shift + i
    { L'œ', KeyReport(LEFT_OPT, K_O) },                  // opt + o
    { L'Œ', KeyReport(LEFT_OPT | LEFT_SHIFT, K_O) },     // opt + shift + o    
    { L'π', KeyReport(LEFT_OPT, K_P) },                  // opt + p
    { L'∏', KeyReport(LEFT_OPT | LEFT_SHIFT, K_P) },     // opt + shift + p
    { L'‡', KeyReport(LEFT_OPT, K_Q) },                  // opt + q
    { L'Ω', KeyReport(LEFT_OPT | LEFT_SHIFT, K_Q) },     // opt + shift + q      
    { L'Ò', KeyReport(LEFT_OPT, K_S) },                  // opt + s
    { L'∑', KeyReport(LEFT_OPT | LEFT_SHIFT, K_S) },     // opt + shift + s
    { L'∂', KeyReport(LEFT_OPT, K_D) },                  // opt + d
    { L'∆', KeyReport(LEFT_OPT | LEFT_SHIFT, K_D) },     // opt + shift + d        
    { L'ƒ', KeyReport(LEFT_OPT, K_F) },                  // opt + f
    { L'·', KeyReport(LEFT_OPT | LEFT_SHIFT, K_F) },     // opt + shift + f
    { L'ﬁ', KeyReport(LEFT_OPT, K_G) },                  
    { L'ﬂ', KeyReport(LEFT_OPT | LEFT_SHIFT, K_G) },     
    { L'Ì', KeyReport(LEFT_OPT, K_H) },                  
    { L'Î', KeyReport(LEFT_OPT | LEFT_SHIFT, K_H) },
    { L'Ï', KeyReport(LEFT_OPT, K_J) },                  
    { L'Í', KeyReport(LEFT_OPT | LEFT_SHIFT, K_J) }, 
    { L'È', KeyReport(LEFT_OPT, K_K) },                  
    { L'Ë', KeyReport(LEFT_OPT | LEFT_SHIFT, K_K) }, 
    { L'¬', KeyReport(LEFT_OPT, K_L) },                  
    { L'|', KeyReport(LEFT_OPT | LEFT_SHIFT, K_L) },
    { L'µ', KeyReport(LEFT_OPT, K_M) },                  
    { L'Ó', KeyReport(LEFT_OPT | LEFT_SHIFT, K_M) },
    { L'‹', KeyReport(LEFT_OPT, K_W) },                  
    { L'›', KeyReport(LEFT_OPT | LEFT_SHIFT, K_W) },
    { L'≈', KeyReport(LEFT_OPT, K_X) },                  
    { L'⁄', KeyReport(LEFT_OPT | LEFT_SHIFT, K_X) },
    { L'©', KeyReport(LEFT_OPT, K_C) },                  
    { L'¢', KeyReport(LEFT_OPT | LEFT_SHIFT, K_C) },
    { L'◊', KeyReport(LEFT_OPT, K_V) },                  
    { L'√', KeyReport(LEFT_OPT | LEFT_SHIFT, K_V) },
    { L'ß', KeyReport(LEFT_OPT, K_B) },                  
    { L'∫', KeyReport(LEFT_OPT | LEFT_SHIFT, K_B) },
    { L'~', KeyReport(LEFT_OPT, K_N) },                  
    { L'ı', KeyReport(LEFT_OPT | LEFT_SHIFT, K_N) },
};
#endif

