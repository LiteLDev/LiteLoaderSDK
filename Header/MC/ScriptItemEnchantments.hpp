// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptItemEnchantments {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTITEMENCHANTMENTS
public:
    class ScriptItemEnchantments& operator=(class ScriptItemEnchantments const &) = delete;
    ScriptItemEnchantments() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTITEMENCHANTMENTS
#endif
    MCAPI ScriptItemEnchantments(class ScriptItemEnchantments &&);
    MCAPI ScriptItemEnchantments(class ScriptItemEnchantments const &);
    MCAPI ScriptItemEnchantments(class ItemEnchants const &);
    MCAPI bool addEnchantment(struct ScriptItemEnchantmentInstance const &);
    MCAPI bool canAddEnchantment(struct ScriptItemEnchantmentInstance const &);
    MCAPI int getEnchantSlot() const;
    MCAPI class std::optional<struct ScriptItemEnchantmentInstance> getEnchantment(struct ScriptItemEnchantmentType const &);
    MCAPI class ItemEnchants const & getEnchants() const;
    MCAPI class ScriptItemEnchantments & operator=(class ScriptItemEnchantments &&);
    MCAPI ~ScriptItemEnchantments();
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptItemEnchantments> bind(struct Scripting::Version);

protected:

private:

};