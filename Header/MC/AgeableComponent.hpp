// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AgeableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGEABLECOMPONENT
public:
    class AgeableComponent& operator=(class AgeableComponent const &) = delete;
    AgeableComponent(class AgeableComponent const &) = delete;
    AgeableComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGEABLECOMPONENT
#endif
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    MCAPI int getAge() const;
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void setAge(int);

protected:

private:

};