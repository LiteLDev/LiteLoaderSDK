// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LootEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTENCHANT
public:
    class LootEnchant& operator=(class LootEnchant const &) = delete;
    LootEnchant(class LootEnchant const &) = delete;
    LootEnchant() = delete;
#endif

public:
    /*0*/ virtual ~LootEnchant();
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*5*/ virtual int getMaxLevel() const;
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTENCHANT
#endif
    MCAPI LootEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

protected:

private:

};