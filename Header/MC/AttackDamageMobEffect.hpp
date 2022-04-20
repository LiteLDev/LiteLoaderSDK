// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MobEffect.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AttackDamageMobEffect : public MobEffect {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTACKDAMAGEMOBEFFECT
public:
    class AttackDamageMobEffect& operator=(class AttackDamageMobEffect const &) = delete;
    AttackDamageMobEffect(class AttackDamageMobEffect const &) = delete;
    AttackDamageMobEffect() = delete;
#endif

public:
    /*0*/ virtual ~AttackDamageMobEffect();
    /*5*/ virtual float getAttributeModifierValue(int, class AttributeModifier const &) const;
    MCAPI AttackDamageMobEffect(int, std::string const &, std::string const &, bool, int, int);
    MCAPI static float getDamageAfterDamageBoost(float, int);
    MCAPI static float getDamageAfterWeakness(float, int);

protected:

private:

};