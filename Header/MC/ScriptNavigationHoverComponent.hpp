// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NavigationScriptActorComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptNavigationHoverComponent : public NavigationScriptActorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTNAVIGATIONHOVERCOMPONENT
public:
    class ScriptNavigationHoverComponent& operator=(class ScriptNavigationHoverComponent const &) = delete;
    ScriptNavigationHoverComponent(class ScriptNavigationHoverComponent const &) = delete;
    ScriptNavigationHoverComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptNavigationHoverComponent();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTNAVIGATIONHOVERCOMPONENT
#endif
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptNavigationHoverComponent> bind(struct Scripting::Version);

protected:

private:

};