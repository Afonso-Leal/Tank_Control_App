#include "behaviorthread.h"

extern "C"{
    #include "../../common/behavior.h"
}

BehaviorThread::BehaviorThread()
{

}

void BehaviorThread::run(){
    behavior();
}
