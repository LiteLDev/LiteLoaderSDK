// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FertilizeFarmBlockDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FERTILIZEFARMBLOCKDEFINITION
public:
    class FertilizeFarmBlockDefinition& operator=(class FertilizeFarmBlockDefinition const &) = delete;
    FertilizeFarmBlockDefinition(class FertilizeFarmBlockDefinition const &) = delete;
#endif

public:
    /*0*/ virtual ~FertilizeFarmBlockDefinition();
    MCAPI FertilizeFarmBlockDefinition();
    MCAPI void initialize(class EntityContext &, class FertilizeFarmBlockGoal &);
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class FertilizeFarmBlockDefinition>> &);

protected:

private:

};