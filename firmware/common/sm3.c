#include "sm3.h"
#include "hal.h"
#include "chronometer.h"

StateMachine sm3;
chrono sm3_chrono;

STATE(sm3_init){
    if(ENTRY){
        v2(0);
    }
    if(!s31() && !s32()){
        NEXT_STATE(sm3_opened);
    }
    else if(!s31() && s32()){
        NEXT_STATE(sm3_error);
    }
    else if(s31() && !s32()){
        NEXT_STATE(sm3_opened);
    }
    else if(s31() && s32()){
        NEXT_STATE(sm3_closed);
    }
}
STATE(sm3_opened){
    if(ENTRY){
        v2(1);
    }
    if(!s31() && !s32()){
        ;
    }
    else if(!s31() && s32()){
        NEXT_STATE(sm3_error);
    }
    else if(s31() && !s32()){
        ;
    }
    else if(s31() && s32()){
        NEXT_STATE(sm3_closed);
    }
}
STATE(sm3_closed){
    if(ENTRY){
        v2(0);
        chrono_start(&sm3_chrono,3000);
    }
    if(!s31() && !s32()){
        if(chrono_is_finished(&sm3_chrono))
        NEXT_STATE(sm3_opened);
    }
    else if(!s31() && s32()){
        NEXT_STATE(sm3_error);
    }
    else if(s31() && !s32()){
        if(chrono_is_finished(&sm3_chrono))
        NEXT_STATE(sm3_opened);
    }
    else if(s31() && s32()){
        ;
    }
}
STATE(sm3_error){
    if(ENTRY){
        v2(0);
    }
}
