#ifndef HAL_H
#define HAL_H

#include <stdint.h>

void InitHAL();
uint32_t Now();

void v1(uint8_t state);
uint8_t s11();
uint8_t s12();
void b1(uint8_t state);
uint8_t s21();
uint8_t s22();
void v2(uint8_t state);
uint8_t s31();
uint8_t s32();
void h1(uint8_t state);
uint8_t get_temp();

#endif // HAL_H
