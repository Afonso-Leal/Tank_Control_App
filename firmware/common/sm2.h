#ifndef SM2_H
#define SM2_H

#include "sm.h"

STATE(sm2_init);
STATE(sm2_opened);
STATE(sm2_closed);
STATE(sm2_error);

extern StateMachine sm2;

#endif // SM2_H
