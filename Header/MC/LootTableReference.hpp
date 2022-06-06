// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LootTableReference {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTTABLEREFERENCE
public:
    class LootTableReference& operator=(class LootTableReference const &) = delete;
    LootTableReference(class LootTableReference const &) = delete;
    LootTableReference() = delete;
#endif

public:
    /*0*/ virtual bool _createItem(std::vector<class ItemStack> &, class Random &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTTABLEREFERENCE
#endif
    MCAPI static std::unique_ptr<class LootPoolEntry> deserialize(class Json::Value, int, int, std::vector<std::unique_ptr<class LootItemCondition>> &);

protected:

private:

};