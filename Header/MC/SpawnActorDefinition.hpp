// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SpawnActorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNACTORDEFINITION
public:
    class SpawnActorDefinition& operator=(class SpawnActorDefinition const &) = delete;
    SpawnActorDefinition(class SpawnActorDefinition const &) = delete;
    SpawnActorDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPAWNACTORDEFINITION
#endif
    MCAPI void initialize(class EntityContext &, class SpawnActorComponent &) const;
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SpawnActorDefinition>> &);

protected:

private:

};