// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BehaviorTreeDefinitionPtr {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORTREEDEFINITIONPTR
public:
    class BehaviorTreeDefinitionPtr& operator=(class BehaviorTreeDefinitionPtr const &) = delete;
    BehaviorTreeDefinitionPtr(class BehaviorTreeDefinitionPtr const &) = delete;
#endif

public:
    MCAPI BehaviorTreeDefinitionPtr();
    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeDefinitionPtr &&);
    MCAPI class BehaviorTreeDefinitionPtr & operator=(class BehaviorTreeDefinitionPtr &&);
    MCAPI ~BehaviorTreeDefinitionPtr();
    MCAPI static class BehaviorTreeDefinitionPtr const NONE;

protected:
    MCAPI void _deref();

private:

};