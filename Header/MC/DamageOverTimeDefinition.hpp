// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DamageOverTimeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGEOVERTIMEDEFINITION
public:
    class DamageOverTimeDefinition& operator=(class DamageOverTimeDefinition const &) = delete;
    DamageOverTimeDefinition(class DamageOverTimeDefinition const &) = delete;
    DamageOverTimeDefinition() = delete;
#endif

public:
    MCAPI void initialize(class EntityContext &, class DamageOverTimeComponent &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DamageOverTimeDefinition>> &);

protected:

private:

};