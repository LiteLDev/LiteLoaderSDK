// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GiveableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GIVEABLEDEFINITION
public:
    class GiveableDefinition& operator=(class GiveableDefinition const &) = delete;
    GiveableDefinition(class GiveableDefinition const &) = delete;
    GiveableDefinition() = delete;
#endif

public:
    MCAPI void addGiveableTrigger(struct GiveableTrigger const &);
    MCAPI void initialize(class EntityContext &, class GiveableComponent &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GiveableDefinition>> &);

protected:

private:

};