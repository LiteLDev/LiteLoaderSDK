// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PlayerVehicleTamedGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERVEHICLETAMEDGOAL
public:
    class PlayerVehicleTamedGoal& operator=(class PlayerVehicleTamedGoal const &) = delete;
    PlayerVehicleTamedGoal(class PlayerVehicleTamedGoal const &) = delete;
    PlayerVehicleTamedGoal() = delete;
#endif

public:
    /*0*/ virtual ~PlayerVehicleTamedGoal();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERVEHICLETAMEDGOAL
    MCVAPI bool canContinueToUse();
    MCVAPI bool canUse();
    MCVAPI void start();
    MCVAPI void tick();
#endif
    MCAPI PlayerVehicleTamedGoal(class Mob &);

protected:

private:

};