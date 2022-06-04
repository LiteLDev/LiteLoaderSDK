// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockSourceListener.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ClassroomModeListener : public BlockSourceListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLASSROOMMODELISTENER
public:
    class ClassroomModeListener& operator=(class ClassroomModeListener const &) = delete;
    ClassroomModeListener(class ClassroomModeListener const &) = delete;
    ClassroomModeListener() = delete;
#endif

public:
    /*0*/ virtual ~ClassroomModeListener();
    /*1*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*6*/ virtual void __unk_vfn_6();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual class Particle * addParticle(enum ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
    /*
    inline void onEntityRemoved(class Actor & a0){
        void (ClassroomModeListener::*rv)(class Actor &);
        *((void**)&rv) = dlsym("?onEntityRemoved@ClassroomModeListener@@UEAAXAEAVActor@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0));
    }
    inline void onAreaChanged(class BlockSource & a0, class BlockPos const & a1, class BlockPos const & a2){
        void (ClassroomModeListener::*rv)(class BlockSource &, class BlockPos const &, class BlockPos const &);
        *((void**)&rv) = dlsym("?onAreaChanged@ClassroomModeListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class BlockPos const &>(a1), std::forward<class BlockPos const &>(a2));
    }
    inline void onBlockChanged(class BlockSource & a0, class BlockPos const & a1, unsigned int a2, class Block const & a3, class Block const & a4, int a5, struct ActorBlockSyncMessage const * a6, enum BlockChangedEventTarget a7, class Actor * a8){
        void (ClassroomModeListener::*rv)(class BlockSource &, class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *, enum BlockChangedEventTarget, class Actor *);
        *((void**)&rv) = dlsym("?onBlockChanged@ClassroomModeListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class BlockPos const &>(a1), std::forward<unsigned int>(a2), std::forward<class Block const &>(a3), std::forward<class Block const &>(a4), std::forward<int>(a5), std::forward<struct ActorBlockSyncMessage const *>(a6), std::forward<enum BlockChangedEventTarget>(a7), std::forward<class Actor *>(a8));
    }
    inline void onChunkUnloaded(class LevelChunk & a0){
        void (ClassroomModeListener::*rv)(class LevelChunk &);
        *((void**)&rv) = dlsym("?onChunkUnloaded@ClassroomModeListener@@UEAAXAEAVLevelChunk@@@Z");
        return (this->*rv)(std::forward<class LevelChunk &>(a0));
    }
    inline void onChunkLoaded(class ChunkSource & a0, class LevelChunk & a1){
        void (ClassroomModeListener::*rv)(class ChunkSource &, class LevelChunk &);
        *((void**)&rv) = dlsym("?onChunkLoaded@ClassroomModeListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z");
        return (this->*rv)(std::forward<class ChunkSource &>(a0), std::forward<class LevelChunk &>(a1));
    }
    inline void onEntityAdded(class Actor & a0){
        void (ClassroomModeListener::*rv)(class Actor &);
        *((void**)&rv) = dlsym("?onEntityAdded@ClassroomModeListener@@UEAAXAEAVActor@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0));
    }
    */
    MCAPI ClassroomModeListener(class IMinecraftEventing &);

protected:

private:

};