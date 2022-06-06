// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Aquifer {

#define AFTER_EXTRA
// Add Member There
public:
struct FluidSample {
    FluidSample() = delete;
    FluidSample(FluidSample const&) = delete;
    FluidSample(FluidSample const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AQUIFER
public:
    class Aquifer& operator=(class Aquifer const &) = delete;
    Aquifer(class Aquifer const &) = delete;
    Aquifer() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AQUIFER
#endif
    MCAPI Aquifer(class ChunkPos const &, class AquiferNoises const &, class SurfaceLevelCache const &, int, int, int);
    MCAPI void computeAt(class BlockPos const &);
    MCAPI float getLastBarrier() const;
    MCAPI class Block const * getLastFluidBlockType(bool) const;
    MCAPI int getLastFluidLevel() const;
    MCAPI bool shouldScheduleFluidUpdate() const;

protected:

private:
    MCAPI struct Aquifer::FluidSample _computeAquifer(class BlockPos const &) const;
    MCAPI struct Aquifer::FluidSample _getOrComputeNewFluidSample(class BlockPos const &);
    MCAPI static class std::array<struct std::pair<int, int>, 13> const chunkOffset;

};