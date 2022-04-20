// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StructurePoolBlockRule {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKRULE
public:
    class StructurePoolBlockRule& operator=(class StructurePoolBlockRule const &) = delete;
    StructurePoolBlockRule(class StructurePoolBlockRule const &) = delete;
    StructurePoolBlockRule() = delete;
#endif

public:
    MCAPI StructurePoolBlockRule(std::unique_ptr<class IStructurePoolBlockPredicate> &&, std::unique_ptr<class IStructurePoolBlockPredicate> &&, std::unique_ptr<class IStructurePoolBlockPredicate> &&, class Block const *);
    MCAPI StructurePoolBlockRule(std::unique_ptr<class IStructurePoolBlockPredicate> &&, std::unique_ptr<class IStructurePoolBlockPredicate> &&, class Block const *);
    MCAPI bool processRule(class Block const &, class Block const &, class Random &, class Block const *&, class BlockPos const &, class BlockPos const &) const;

protected:

private:

};