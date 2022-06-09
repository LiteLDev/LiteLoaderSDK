// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Slime : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIME
public:
    class Slime& operator=(class Slime const &) = delete;
    Slime(class Slime const &) = delete;
    Slime() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~Slime();
    /*16*/ virtual void resetUserPos(bool);
    /*18*/ virtual void remove();
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*78*/ virtual float getCameraOffset() const;
    /*80*/ virtual float getShadowRadius() const;
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual bool canInteractWithOtherEntitiesInGame() const;
    /*88*/ virtual void __unk_vfn_88();
    /*89*/ virtual void playerTouch(class Player &);
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*101*/ virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*113*/ virtual class Actor * findAttackTarget();
    /*114*/ virtual bool isValidTarget(class Actor *) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*130*/ virtual void vehicleLanded(class Vec3 const &, class Vec3 const &);
    /*139*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*151*/ virtual void awardKillScore(class Actor &, int);
    /*171*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*178*/ virtual int getPortalWaitTime() const;
    /*180*/ virtual bool canChangeDimensions() const;
    /*181*/ virtual void __unk_vfn_181();
    /*183*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*190*/ virtual void onSynchedDataUpdate(int);
    /*192*/ virtual bool canPickupItem(class ItemStack const &) const;
    /*193*/ virtual bool canBePulledIntoVehicle() const;
    /*195*/ virtual void __unk_vfn_195();
    /*198*/ virtual bool canSynchronizeNewEntity() const;
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*228*/ virtual bool isWorldBuilder() const;
    /*229*/ virtual bool isCreative() const;
    /*230*/ virtual bool isAdventure() const;
    /*231*/ virtual bool isSurvival() const;
    /*232*/ virtual bool isSpectator() const;
    /*237*/ virtual bool canDestroyBlock(class Block const &) const;
    /*238*/ virtual void setAuxValue(int);
    /*244*/ virtual void stopSpinAttack();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*261*/ virtual void __unk_vfn_261();
    /*265*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*266*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*280*/ virtual void spawnAnim();
    /*294*/ virtual void aiStep();
    /*299*/ virtual bool checkSpawnRules(bool);
    /*302*/ virtual int getItemUseDuration() const;
    /*303*/ virtual float getItemUseStartupProgress() const;
    /*304*/ virtual float getItemUseIntervalProgress() const;
    /*307*/ virtual void __unk_vfn_307();
    /*309*/ virtual bool isAlliedTo(class Mob *);
    /*311*/ virtual void __unk_vfn_311();
    /*321*/ virtual void sendArmorDamage(class std::bitset<4> const &);
    /*338*/ virtual void onBorn(class Actor &, class Actor &);
    /*343*/ virtual float _getWalkTargetValue(class BlockPos const &);
    /*345*/ virtual void __unk_vfn_345();
    /*355*/ virtual void _serverAiMobStep();
    /*359*/ virtual void __unk_vfn_359();
    /*362*/ virtual bool canDealDamage();
    /*363*/ virtual enum LevelSoundEvent getSquishSound();
    /*364*/ virtual void setSlimeSize(int);
    /*365*/ virtual bool doPlayJumpSound();
    /*366*/ virtual bool doPlayLandSound();
    /*367*/ virtual void playJumpSound();
    /*368*/ virtual void playLandSound();
    /*369*/ virtual void decreaseSquish();
    /*370*/ virtual class OwnerPtrT<struct EntityRefTraits> createChild(int);
    /*
    inline bool useNewAi() const{
        bool (Slime::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@Slime@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~Slime(){
         (Slime::*rv)();
        *((void**)&rv) = dlsym("??1Slime@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI Slime(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI float getOldSquishValue() const;
    MCAPI int getSlimeSize() const;
    MCAPI float getSquishValue() const;

protected:
    MCAPI void justJumped();
    MCAPI void justLanded();

private:

};