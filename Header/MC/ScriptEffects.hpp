// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptEffects {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTEFFECTS
public:
    class ScriptEffects& operator=(class ScriptEffects const &) = delete;
    ScriptEffects(class ScriptEffects const &) = delete;
#endif

public:
    MCAPI ScriptEffects();
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptEffectType> get(class Scripting::WeakLifetimeScope &, std::string const &);
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptEffects> bind(struct Scripting::Version);

protected:

private:

};