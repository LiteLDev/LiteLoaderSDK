// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptObject.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptComponent : public ScriptObject {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTCOMPONENT
public:
    ScriptComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptComponent();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTCOMPONENT
#endif
    MCAPI ScriptComponent(class ScriptComponent const &);
    MCAPI std::string const & getId() const;
    MCAPI class ScriptComponent & operator=(class ScriptComponent const &);

protected:

private:

};