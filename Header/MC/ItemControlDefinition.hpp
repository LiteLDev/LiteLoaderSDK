// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct ItemControlDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMCONTROLDEFINITION
public:
    struct ItemControlDefinition& operator=(struct ItemControlDefinition const &) = delete;
    ItemControlDefinition(struct ItemControlDefinition const &) = delete;
    ItemControlDefinition() = delete;
#endif

public:
    MCAPI void addItemByName(std::string const &);

protected:

private:

};