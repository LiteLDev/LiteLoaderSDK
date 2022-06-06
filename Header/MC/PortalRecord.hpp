// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PortalRecord {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PORTALRECORD
public:
    class PortalRecord& operator=(class PortalRecord const &) = delete;
    PortalRecord(class PortalRecord const &) = delete;
    PortalRecord() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PORTALRECORD
#endif
    MCAPI PortalRecord(class BlockPos const &);
    MCAPI PortalRecord(class BlockPos const &, int, int, int);
    MCAPI class BlockPos closestBlockPosTo(class Actor const &) const;
    MCAPI unsigned __int64 hashCode() const;
    MCAPI bool operator==(class PortalRecord const &) const;

protected:

private:

};