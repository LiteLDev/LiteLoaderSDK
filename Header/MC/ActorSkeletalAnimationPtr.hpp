// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorSkeletalAnimationPtr {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSKELETALANIMATIONPTR
public:
    ActorSkeletalAnimationPtr(class ActorSkeletalAnimationPtr const &) = delete;
    ActorSkeletalAnimationPtr() = delete;
#endif

public:
    MCAPI class HashedString const & getName() const;
    MCAPI bool isNull() const;
    MCAPI class ActorSkeletalAnimation const * operator->() const;
    MCAPI class ActorSkeletalAnimation * operator->();
    MCAPI class ActorSkeletalAnimationPtr & operator=(class ActorSkeletalAnimationPtr const &);
    MCAPI ~ActorSkeletalAnimationPtr();
    MCAPI static class ActorSkeletalAnimationPtr const NONE;

protected:

private:

};