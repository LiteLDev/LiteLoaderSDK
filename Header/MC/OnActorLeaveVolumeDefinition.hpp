// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct OnActorLeaveVolumeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONACTORLEAVEVOLUMEDEFINITION
public:
    struct OnActorLeaveVolumeDefinition& operator=(struct OnActorLeaveVolumeDefinition const &) = delete;
    OnActorLeaveVolumeDefinition(struct OnActorLeaveVolumeDefinition const &) = delete;
    OnActorLeaveVolumeDefinition() = delete;
#endif

public:
    MCAPI void initialize(class EntityContext &, class OnActorLeaveVolumeComponent &) const;

protected:

private:

};