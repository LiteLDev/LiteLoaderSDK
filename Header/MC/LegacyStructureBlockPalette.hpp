// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LegacyStructureBlockPalette {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSTRUCTUREBLOCKPALETTE
public:
    class LegacyStructureBlockPalette& operator=(class LegacyStructureBlockPalette const &) = delete;
    LegacyStructureBlockPalette(class LegacyStructureBlockPalette const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEGACYSTRUCTUREBLOCKPALETTE
#endif
    MCAPI LegacyStructureBlockPalette();
    MCAPI void addMapping(int, class Block const &);
    MCAPI void clearMap();
    MCAPI class Block const & getBlock(int);
    MCAPI ~LegacyStructureBlockPalette();

protected:

private:

};