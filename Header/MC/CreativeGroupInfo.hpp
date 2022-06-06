// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CreativeGroupInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEGROUPINFO
public:
    class CreativeGroupInfo& operator=(class CreativeGroupInfo const &) = delete;
    CreativeGroupInfo() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CREATIVEGROUPINFO
#endif
    MCAPI CreativeGroupInfo(class CreativeGroupInfo const &);
    MCAPI CreativeGroupInfo(class CreativeItemRegistry *, enum CreativeItemCategory, class HashedString const &, unsigned int, class ItemInstance const &);
    MCAPI void addCreativeItem(class CreativeItemEntry *);
    MCAPI class ItemInstance const getIcon() const;
    MCAPI unsigned int getIndex() const;
    MCAPI std::string const getName() const;

protected:

private:

};