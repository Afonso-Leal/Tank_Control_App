#include "chronometer.h"
#include "hal.h"

void chrono_start(chrono* c, uint32_t dt){
    *c = Now()+dt;
}

uint8_t chrono_is_finished(chrono* c){
    return Now()>=*c;
}
