// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class InsideHoneyBlockSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEHONEYBLOCKSYSTEM
public:
    class InsideHoneyBlockSystem& operator=(class InsideHoneyBlockSystem const &) = delete;
    InsideHoneyBlockSystem(class InsideHoneyBlockSystem const &) = delete;
    InsideHoneyBlockSystem() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INSIDEHONEYBLOCKSYSTEM
#endif
    MCAPI static struct TickingSystemWithInfo createEventsSystem();
    MCAPI static struct TickingSystemWithInfo createMovementSystem();



};