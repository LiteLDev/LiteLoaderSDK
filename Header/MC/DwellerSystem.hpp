// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DwellerSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DWELLERSYSTEM
public:
    class DwellerSystem& operator=(class DwellerSystem const &) = delete;
    DwellerSystem(class DwellerSystem const &) = delete;
    DwellerSystem() = delete;
#endif

public:
    /*0*/ virtual ~DwellerSystem();
    /*1*/ virtual void registerEvents(class entt::dispatcher &);
    /*2*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DWELLERSYSTEM
#endif

protected:

private:

};