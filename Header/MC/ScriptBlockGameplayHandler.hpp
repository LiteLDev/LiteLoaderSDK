// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptBlockGameplayHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKGAMEPLAYHANDLER
public:
    class ScriptBlockGameplayHandler& operator=(class ScriptBlockGameplayHandler const &) = delete;
    ScriptBlockGameplayHandler(class ScriptBlockGameplayHandler const &) = delete;
    ScriptBlockGameplayHandler() = delete;
#endif

public:
    /*0*/ virtual ~ScriptBlockGameplayHandler();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct ExplosionStartedEvent &);
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct PistonActionEvent const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTBLOCKGAMEPLAYHANDLER
#endif

protected:

private:
    MCAPI bool _handleExplosionStartedEvent(struct ExplosionStartedEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptWorldEvents>) const;
    MCAPI bool _handlePistonActionEvent(struct PistonActionEvent const &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptWorldEvents>) const;

};