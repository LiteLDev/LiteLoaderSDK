// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LeapAtTargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEAPATTARGETGOAL
public:
    class LeapAtTargetGoal& operator=(class LeapAtTargetGoal const&) = delete;
    LeapAtTargetGoal(class LeapAtTargetGoal const&) = delete;
    LeapAtTargetGoal() = delete;
#endif

public:
    /*0*/ virtual ~LeapAtTargetGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual void __unk_vfn_2();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    MCAPI LeapAtTargetGoal(class Mob&, float, bool, bool);

protected:

private:

};