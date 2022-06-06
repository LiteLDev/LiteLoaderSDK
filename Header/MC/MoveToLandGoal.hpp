// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MoveToLandGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOLANDGOAL
public:
    class MoveToLandGoal& operator=(class MoveToLandGoal const &) = delete;
    MoveToLandGoal(class MoveToLandGoal const &) = delete;
    MoveToLandGoal() = delete;
#endif

public:
    /*0*/ virtual ~MoveToLandGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*11*/ virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /*14*/ virtual void _moveToBlock();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETOLANDGOAL
#endif
    MCAPI MoveToLandGoal(class Mob &, float, int, int, int, float);

protected:

private:

};