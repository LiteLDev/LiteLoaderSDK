// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TorchBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SoulTorchBlock : public TorchBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOULTORCHBLOCK
public:
    class SoulTorchBlock& operator=(class SoulTorchBlock const&) = delete;
    SoulTorchBlock(class SoulTorchBlock const&) = delete;
    SoulTorchBlock() = delete;
#endif

public:
    /*0*/ virtual ~SoulTorchBlock();
    /*1*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*2*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*3*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*4*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*5*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*6*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const& (class BlockPos const& )> const&, class BlockPos const&) const;
    /*7*/ virtual void __unk_vfn_0();
    /*8*/ virtual bool isStrippable(class Block const&) const;
    /*9*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*10*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*11*/ virtual void __unk_vfn_1();
    /*12*/ virtual void __unk_vfn_2();
    /*13*/ virtual void __unk_vfn_3();
    /*14*/ virtual void __unk_vfn_4();
    /*15*/ virtual void __unk_vfn_5();
    /*16*/ virtual void __unk_vfn_6();
    /*17*/ virtual void __unk_vfn_7();
    /*18*/ virtual void __unk_vfn_8();
    /*19*/ virtual void __unk_vfn_9();
    /*20*/ virtual void __unk_vfn_10();
    /*21*/ virtual bool isDoubleSlabBlock() const;
    /*22*/ virtual void __unk_vfn_11();
    /*23*/ virtual void __unk_vfn_12();
    /*24*/ virtual void __unk_vfn_13();
    /*25*/ virtual void __unk_vfn_14();
    /*26*/ virtual void __unk_vfn_15();
    /*27*/ virtual void __unk_vfn_16();
    /*28*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*29*/ virtual bool isValidAuxValue(int) const;
    /*30*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*31*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*32*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*33*/ virtual void __unk_vfn_17();
    /*34*/ virtual void __unk_vfn_18();
    /*35*/ virtual bool canContainLiquid() const;
    /*36*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*37*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*38*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*39*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*40*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*41*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*42*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*43*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*44*/ virtual void __unk_vfn_19();
    /*45*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*46*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*47*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual enum BlockProperty getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void __unk_vfn_20();
    /*51*/ virtual bool isFilteredOut(enum BlockRenderLayer) const;
    /*52*/ virtual void __unk_vfn_21();
    /*53*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*54*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, enum FertilizerType) const;
    /*55*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*56*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*57*/ virtual bool mayPick() const;
    /*58*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*59*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*60*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*61*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*62*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*63*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*64*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*65*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*66*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*67*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*68*/ virtual void __unk_vfn_22();
    /*69*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*70*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*71*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*72*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*73*/ virtual int getExperienceDrop(class Random&) const;
    /*74*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*75*/ virtual void __unk_vfn_23();
    /*76*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*77*/ virtual void __unk_vfn_24();
    /*78*/ virtual void __unk_vfn_25();
    /*79*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*80*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*81*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*82*/ virtual void __unk_vfn_26();
    /*83*/ virtual bool isAuxValueRelevantForPicking() const;
    /*84*/ virtual int getColor(class Block const&) const;
    /*85*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*86*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*87*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*88*/ virtual void __unk_vfn_27();
    /*89*/ virtual class Block const& getRenderBlock() const;
    /*90*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*91*/ virtual enum Flip getFaceFlip(unsigned char, class Block const&) const;
    /*92*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*93*/ virtual void __unk_vfn_28();
    /*94*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*95*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*96*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*97*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*98*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*99*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*100*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*101*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*102*/ virtual void __unk_vfn_29();
    /*103*/ virtual void __unk_vfn_30();
    /*104*/ virtual void __unk_vfn_31();
    /*105*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*106*/ virtual enum BlockRenderLayer getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*107*/ virtual int getExtraRenderLayers() const;
    /*108*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*109*/ virtual void __unk_vfn_32();
    /*110*/ virtual void __unk_vfn_33();
    MCAPI SoulTorchBlock(std::string const&, int);

protected:

private:

};