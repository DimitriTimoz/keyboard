#include "keybind.h"


KeyReport::KeyReport(){}

KeyReport::KeyReport(u_int8_t key){
    modifiers = 0;
    keys[0] = key;
}

KeyReport::KeyReport(uint8_t mod, uint8_t key){
    modifiers = mod;
    keys[0] = key;
}