// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FindCoverGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDCOVERGOAL
public:
    class FindCoverGoal& operator=(class FindCoverGoal const&) = delete;
    FindCoverGoal(class FindCoverGoal const&) = delete;
    FindCoverGoal() = delete;
#endif

public:
    /*0*/ virtual ~FindCoverGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void __unk_vfn_1();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    MCAPI FindCoverGoal(class Mob&, float, float);

protected:

private:

};