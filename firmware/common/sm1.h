#ifndef SM1_H
#define SM1_H

#include "sm.h"

STATE(sm1_init);
STATE(sm1_opened);
STATE(sm1_closed);
STATE(sm1_error);

extern StateMachine sm1;

#endif // SM1_H
