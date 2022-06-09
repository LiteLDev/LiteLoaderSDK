// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BaseGoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEGOALDEFINITION
public:
    class BaseGoalDefinition& operator=(class BaseGoalDefinition const &) = delete;
    BaseGoalDefinition(class BaseGoalDefinition const &) = delete;
    BaseGoalDefinition() = delete;
#endif

public:
    /*0*/ virtual ~BaseGoalDefinition();
    /*
    inline bool validateMobType(class Mob & a0){
        bool (BaseGoalDefinition::*rv)(class Mob &);
        *((void**)&rv) = dlsym("?validateMobType@BaseGoalDefinition@@UEAA_NAEAVMob@@@Z");
        return (this->*rv)(std::forward<class Mob &>(a0));
    }
    inline bool validate(class Mob & a0){
        bool (BaseGoalDefinition::*rv)(class Mob &);
        *((void**)&rv) = dlsym("?validate@BaseGoalDefinition@@UEAA_NAEAVMob@@@Z");
        return (this->*rv)(std::forward<class Mob &>(a0));
    }
    inline  ~BaseGoalDefinition(){
         (BaseGoalDefinition::*rv)();
        *((void**)&rv) = dlsym("??1BaseGoalDefinition@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI void initialize(class EntityContext &, class Goal &);

protected:

private:
    MCAPI static class std::unordered_map<std::string, int, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, int>>> mControlFlagMap;

};