// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct EnvironmentRequirement {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENVIRONMENTREQUIREMENT
public:
    struct EnvironmentRequirement& operator=(struct EnvironmentRequirement const&) = delete;
    EnvironmentRequirement(struct EnvironmentRequirement const&) = delete;
    EnvironmentRequirement() = delete;
#endif

public:
    MCAPI void addBlockDescriptor(class BlockDescriptor const&);
    MCAPI ~EnvironmentRequirement();

protected:

private:

};