#include "../../common/hal.h"
#include <windows.h>
#include <time.h>

uint8_t pin_v1;
uint8_t pin_s11;
uint8_t pin_s12;
uint8_t pin_b1;
uint8_t pin_s21;
uint8_t pin_s22;
uint8_t pin_v2;
uint8_t pin_s31;
uint8_t pin_s32;
uint8_t pin_h1;
uint8_t temp_1;

void InitHAL(){
    pin_v1 = 0;
    pin_s11 = 0;
    pin_s12 = 0;
    pin_b1 = 0;
    pin_s21 = 0;
    pin_s22 = 0;
    pin_v2 = 1;
    pin_s31 = 0;
    pin_s32 = 0;
    temp_1 = 0;
    pin_h1 = 0;
}

uint32_t Now(){
    return clock();
}

void v1(uint8_t state){
    pin_v1 = state;
}

uint8_t s11(){
    return pin_s11;
}

uint8_t s12(){
    return pin_s12;
}

void b1(uint8_t state){
    pin_b1 = state;
}

uint8_t s21(){
    return pin_s21;
}

uint8_t s22(){
    return pin_s22;
}

void v2(uint8_t state){
    pin_v2 = state;
}
uint8_t s31(){
    return pin_s31;
}
uint8_t s32(){
    return pin_s32;
}

void h1(uint8_t state){
    pin_h1 = state;
}
uint8_t get_temp(){
    return temp_1;
}
