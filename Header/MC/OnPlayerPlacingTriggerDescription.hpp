// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OnPlayerPlacingTriggerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONPLAYERPLACINGTRIGGERDESCRIPTION
public:
    class OnPlayerPlacingTriggerDescription& operator=(class OnPlayerPlacingTriggerDescription const &) = delete;
    OnPlayerPlacingTriggerDescription(class OnPlayerPlacingTriggerDescription const &) = delete;
    OnPlayerPlacingTriggerDescription() = delete;
#endif

public:
    /*0*/ virtual ~OnPlayerPlacingTriggerDescription();
    /*1*/ virtual std::string const & getName() const;
    /*4*/ virtual bool isNetworkComponent() const;
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONPLAYERPLACINGTRIGGERDESCRIPTION
#endif
    MCAPI static std::string const NameID;

protected:

private:

};