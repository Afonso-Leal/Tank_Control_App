#ifndef SM3_H
#define SM3_H

#include "sm.h"

STATE(sm3_init);
STATE(sm3_opened);
STATE(sm3_closed);
STATE(sm3_error);

extern StateMachine sm3;

#endif // SM3_H
