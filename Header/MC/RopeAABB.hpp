// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RopeAABB {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROPEAABB
public:
    class RopeAABB& operator=(class RopeAABB const &) = delete;
    RopeAABB(class RopeAABB const &) = delete;
    RopeAABB() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ROPEAABB
#endif
    MCAPI bool getContactPoint(class Vec3 const &, float, struct AABBContactPoint &) const;

protected:

private:

};