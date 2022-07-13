// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Potion.hpp"
#include "PotionItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SplashPotionItem : public PotionItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPLASHPOTIONITEM
public:
    class SplashPotionItem& operator=(class SplashPotionItem const &) = delete;
    SplashPotionItem(class SplashPotionItem const &) = delete;
    SplashPotionItem() = delete;
#endif


public:
    /*0*/ virtual ~SplashPotionItem();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*13*/ virtual void __unk_vfn_13();
    /*15*/ virtual void __unk_vfn_15();
    /*22*/ virtual bool isThrowable() const;
    /*51*/ virtual void __unk_vfn_51();
    /*53*/ virtual void __unk_vfn_53();
    /*60*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*66*/ virtual void __unk_vfn_66();
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*75*/ virtual void __unk_vfn_75();
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*84*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*85*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*95*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*121*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*123*/ virtual class Item & setIcon(std::string const &, int);
    /*135*/ virtual enum Potion::PotionType getPotionType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPLASHPOTIONITEM
#endif
    MCAPI SplashPotionItem(std::string const &, int);



};