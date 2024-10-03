#include "sm2.h"
#include "hal.h"
#include "chronometer.h"

StateMachine sm2;
chrono sm2_chrono;


STATE(sm2_init){
    if(ENTRY){
        b1(0);
    }
    if(!s22()){
        if(s11()){


                NEXT_STATE(sm2_opened);
        }
    }
    else{
        if(s21())
            NEXT_STATE(sm2_closed);
        else
            NEXT_STATE(sm2_error);
    }
}
STATE(sm2_opened){
    if(ENTRY)
        b1(1);
    if(s22()){
        if(s21())
                NEXT_STATE(sm2_closed);

        else
            NEXT_STATE(sm2_error);
    }
    else if (!s11()){
        NEXT_STATE(sm2_closed);
    }
}


STATE(sm2_closed){
    if(ENTRY){
        b1(0);
        chrono_start(&sm2_chrono,3000);
    }

    if(s22()){
        if(!s21())
            NEXT_STATE(sm2_error);
    }else{
        if(chrono_is_finished(&sm2_chrono)){
            if(s11())
                NEXT_STATE(sm2_opened);
        }
    }
}
STATE(sm2_error){
    if(ENTRY)
        b1(0);
}
