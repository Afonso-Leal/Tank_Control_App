#ifndef CHRONOMETER_H
#define CHRONOMETER_H
#include <stdint.h>

typedef uint32_t chrono;

void chrono_start(chrono* c, uint32_t dt);
uint8_t chrono_is_finished(chrono* c);

#endif // CHRONOMETER_H
