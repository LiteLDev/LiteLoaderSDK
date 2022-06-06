// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChemistryTableBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHEMISTRYTABLEBLOCK
public:
    class ChemistryTableBlock& operator=(class ChemistryTableBlock const &) = delete;
    ChemistryTableBlock(class ChemistryTableBlock const &) = delete;
    ChemistryTableBlock() = delete;
#endif

public:
    /*0*/ virtual ~ChemistryTableBlock();
    /*19*/ virtual void __unk_vfn_19();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual bool isWaterBlocking() const;
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
    /*56*/ virtual void onFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*63*/ virtual bool canBeUsedInCommands(class BaseGameVersion const &) const;
    /*72*/ virtual void __unk_vfn_72();
    /*79*/ virtual void __unk_vfn_79();
    /*101*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*104*/ virtual void __unk_vfn_104();
    /*105*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*134*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*135*/ virtual bool isAuxValueRelevantForPicking() const;
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*150*/ virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
    /*165*/ virtual void __unk_vfn_165();
    /*175*/ virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*187*/ virtual void __unk_vfn_187();
    /*189*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*199*/ virtual void __unk_vfn_199();
    /*203*/ virtual class ItemInstance getEntityResourceItem(class Randomize &, class BlockActor const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHEMISTRYTABLEBLOCK
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool isCraftingBlock() const;
    MCVAPI bool isInteractiveBlock() const;
#endif
    MCAPI ChemistryTableBlock(std::string const &, int);
    MCAPI static class ItemInstance getItemForType(enum ChemistryTableType, int);
    MCAPI static bool isUIValidForPlayer(class BlockPos const &, class Player &, float, enum ChemistryTableType);

protected:

private:

};