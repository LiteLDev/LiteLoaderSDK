// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SlabBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WoodSlabBlock : public SlabBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WOODSLABBLOCK
public:
    class WoodSlabBlock& operator=(class WoodSlabBlock const &) = delete;
    WoodSlabBlock(class WoodSlabBlock const &) = delete;
    WoodSlabBlock() = delete;
#endif

public:
    /*0*/ virtual ~WoodSlabBlock();
    /*19*/ virtual void __unk_vfn_19();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*53*/ virtual bool isValidAuxValue(int) const;
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*72*/ virtual void __unk_vfn_72();
    /*79*/ virtual void __unk_vfn_79();
    /*100*/ virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /*101*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*104*/ virtual void __unk_vfn_104();
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*134*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*165*/ virtual void __unk_vfn_165();
    /*166*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*187*/ virtual void __unk_vfn_187();
    /*198*/ virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /*199*/ virtual void __unk_vfn_199();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WOODSLABBLOCK
#endif
    MCAPI WoodSlabBlock(std::string const &, int, bool, class WeakPtr<class BlockLegacy>);

protected:

private:

};