// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BoostableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOSTABLECOMPONENT
public:
    class BoostableComponent& operator=(class BoostableComponent const &) = delete;
    BoostableComponent(class BoostableComponent const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOOSTABLECOMPONENT
#endif
    MCAPI BoostableComponent();
    MCAPI int getBoostTime() const;
    MCAPI int getBoostTimeTotal() const;
    MCAPI bool getIsBoosting() const;
    MCAPI bool itemUseText(class Player const &, std::string &);
    MCAPI bool onItemInteract(class Actor &, class ItemStack &, class Player &);
    MCAPI void removePassenger(class Player &);
    MCAPI void setBoostTime(int);
    MCAPI void setIsBoosting(bool);
    MCAPI static class std::shared_ptr<class AttributeModifier> getSpeedModifierBoosting();

protected:

private:
    MCAPI bool _canUseItem(class Actor &, class ItemStack &);
    MCAPI static class std::shared_ptr<class AttributeModifier> SPEED_MODIFIER_BOOSTING;
    MCAPI static class mce::UUID const SPEED_MODIFIER_BOOSTING_UUID;

};