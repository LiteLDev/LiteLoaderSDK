// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NavigationScriptActorComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptNavigationClimbComponent : public NavigationScriptActorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTNAVIGATIONCLIMBCOMPONENT
public:
    class ScriptNavigationClimbComponent& operator=(class ScriptNavigationClimbComponent const &) = delete;
    ScriptNavigationClimbComponent(class ScriptNavigationClimbComponent const &) = delete;
    ScriptNavigationClimbComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptNavigationClimbComponent();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTNAVIGATIONCLIMBCOMPONENT
#endif
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptNavigationClimbComponent> bind(struct Scripting::Version);

protected:

private:

};