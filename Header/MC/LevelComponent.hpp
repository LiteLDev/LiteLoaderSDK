// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LevelComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCOMPONENT
public:
    class LevelComponent& operator=(class LevelComponent const &) = delete;
    LevelComponent(class LevelComponent const &) = delete;
    LevelComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELCOMPONENT
#endif
    MCAPI LevelComponent(std::unique_ptr<class ILevel>);
    MCAPI class ILevel & getLevel();
    MCAPI ~LevelComponent();

protected:

private:

};