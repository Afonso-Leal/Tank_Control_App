#include "sm1.h"
#include "hal.h"
#include "chronometer.h"

StateMachine sm1;
chrono sm1_chrono;


STATE(sm1_init){
    if(ENTRY)
        v1(0);
    if(!s12())
        NEXT_STATE(sm1_opened);
    else{
        if(s11())
            NEXT_STATE(sm1_closed);
        else
            NEXT_STATE(sm1_error);
    }
}
STATE(sm1_opened){
    if(ENTRY)
        v1(1);
    if(s12()){
        if(s11())
            NEXT_STATE(sm1_closed);
        else
            NEXT_STATE(sm1_error);
    }
}
STATE(sm1_closed){
    if(ENTRY){
        v1(0);
        chrono_start(&sm1_chrono,3000);
    }

    if(s12()){
        if(!s11())
            NEXT_STATE(sm1_error);
    }else{
        if(chrono_is_finished(&sm1_chrono))
            NEXT_STATE(sm1_opened);
    }
}
STATE(sm1_error){
    if(ENTRY)
        v1(0);
}
