// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseScriptGameTestFunction.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptAsyncGameTestFunction : public BaseScriptGameTestFunction {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTASYNCGAMETESTFUNCTION
public:
    class ScriptAsyncGameTestFunction& operator=(class ScriptAsyncGameTestFunction const &) = delete;
    ScriptAsyncGameTestFunction(class ScriptAsyncGameTestFunction const &) = delete;
    ScriptAsyncGameTestFunction() = delete;
#endif

public:
    /*0*/ virtual ~ScriptAsyncGameTestFunction();
    /*2*/ virtual std::unique_ptr<class gametest::IGameTestFunctionRunResult> run(class gametest::BaseGameTestHelper &, class gametest::IGameTestFunctionContext &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTASYNCGAMETESTFUNCTION
#endif
    MCAPI ScriptAsyncGameTestFunction(class Scripting::WeakLifetimeScope, class Scripting::Closure<class Scripting::Future<void> (struct Scripting::TypedObjectHandle<class ScriptGameTestHelper>)>, std::string const &);

protected:

private:

};