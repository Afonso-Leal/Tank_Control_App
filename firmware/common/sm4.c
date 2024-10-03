#include "sm4.h"
#include "hal.h"
#include "chronometer.h"

StateMachine sm4;

STATE(sm4_init){
    if(ENTRY){
        h1(0);
    }
    if(!s31() || get_temp()>51){
        NEXT_STATE(sm4_off);
    }
    else if(s31() && get_temp()<49){
        NEXT_STATE(sm4_on);
    }
}
STATE(sm4_on){
    if(ENTRY){
        h1(1);
    }
    if(!s31() || get_temp()>51){
        NEXT_STATE(sm4_off);
    }
}
STATE(sm4_off){
    if(ENTRY){
        h1(0);
    }
    if(s31() && get_temp()<49){
        NEXT_STATE(sm4_on);
    }
}
