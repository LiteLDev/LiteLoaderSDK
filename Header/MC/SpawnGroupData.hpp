// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SpawnGroupData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNGROUPDATA
public:
    class SpawnGroupData& operator=(class SpawnGroupData const &) = delete;
    SpawnGroupData(class SpawnGroupData const &) = delete;
    SpawnGroupData() = delete;
#endif

public:
    MCAPI SpawnGroupData(std::string const &, class MobSpawnRules &);
    MCAPI void addSpawnRules(class MobSpawnRules &);
    MCAPI std::string const & getIdentifier() const;
    MCAPI std::vector<class MobSpawnRules> const & getSpawnRules() const;

protected:

private:

};