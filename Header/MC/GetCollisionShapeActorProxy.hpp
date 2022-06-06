// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class GetCollisionShapeActorProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETCOLLISIONSHAPEACTORPROXY
public:
    class GetCollisionShapeActorProxy& operator=(class GetCollisionShapeActorProxy const &) = delete;
    GetCollisionShapeActorProxy(class GetCollisionShapeActorProxy const &) = delete;
    GetCollisionShapeActorProxy() = delete;
#endif

public:
    /*0*/ virtual ~GetCollisionShapeActorProxy();
    /*1*/ virtual bool readBytes(void *, unsigned __int64);
    /*2*/ virtual class Block const & getBlock(class BlockPos const &) const;
    /*3*/ virtual float getFallDistance() const;
    /*4*/ virtual bool hasPassenger() const;
    /*5*/ virtual bool isWearingLeatherBoots() const;
    /*6*/ virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /*7*/ virtual class AABB const & getAABB() const;
    /*8*/ virtual bool hasBiomeTag(unsigned __int64, class BlockPos const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GETCOLLISIONSHAPEACTORPROXY
    MCVAPI bool canDecendThroughBlock() const;
    MCVAPI enum ActorType getEntityTypeId() const;
    MCVAPI float getFeetAttachPosY() const;
    MCVAPI bool hasLightWeightFamilyTag() const;
    MCVAPI bool isRiding() const;
#endif
    MCAPI GetCollisionShapeActorProxy(struct IActorMovementProxy const &);

protected:

private:

};