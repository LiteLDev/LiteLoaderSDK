// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorInfoRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINFOREGISTRY
public:
    class ActorInfoRegistry& operator=(class ActorInfoRegistry const &) = delete;
    ActorInfoRegistry(class ActorInfoRegistry const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORINFOREGISTRY
#endif
    MCAPI ActorInfoRegistry();
    MCAPI struct ActorInfo const & getActorInfo(unsigned int) const;
    MCAPI unsigned int getActorInfoId(std::string const &) const;
    MCAPI unsigned int getActorInfoId(unsigned __int64 const &) const;
    MCAPI std::vector<struct ActorInfo> getActorInfoList() const;
    MCAPI bool isSpawnEggAvailable(std::string);
    MCAPI void registerActorInfo(struct ActorInfo const &);
    MCAPI void setSpawnEggAvailable(std::string, bool);

protected:

private:

};