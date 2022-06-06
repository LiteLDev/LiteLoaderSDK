// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CommandBlockComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKCOMPONENT
public:
    class CommandBlockComponent& operator=(class CommandBlockComponent const &) = delete;
    CommandBlockComponent(class CommandBlockComponent const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDBLOCKCOMPONENT
#endif
    MCAPI CommandBlockComponent(class CommandBlockComponent &&);
    MCAPI CommandBlockComponent();
    MCAPI void addAdditionalSaveData(class CompoundTag &);
    MCAPI int decrementTickCount();
    MCAPI class BaseCommandBlock & getBaseCommandBlock();
    MCAPI int getCurrentTickCount() const;
    MCAPI bool getTicking() const;
    MCAPI void initFromDefinition(class Actor &);
    MCAPI void onCommandBlockUpdate(class Actor &, std::string const &, bool, std::string, int, bool);
    MCAPI class CommandBlockComponent & operator=(class CommandBlockComponent &&);
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void resetCurrentTick();
    MCAPI void setLastOutput(class Actor &, std::string const &);
    MCAPI void setTicking(bool);

protected:

private:

};