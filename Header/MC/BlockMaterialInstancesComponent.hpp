// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct BlockMaterialInstancesComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMATERIALINSTANCESCOMPONENT
public:
    struct BlockMaterialInstancesComponent& operator=(struct BlockMaterialInstancesComponent const &) = delete;
    BlockMaterialInstancesComponent(struct BlockMaterialInstancesComponent const &) = delete;
    BlockMaterialInstancesComponent() = delete;
#endif

public:
    MCAPI BlockMaterialInstancesComponent(struct BlockMaterialInstancesComponent &&);
    MCAPI enum BlockRenderLayer getRenderLayer() const;
    MCAPI struct BlockMaterialInstancesComponent & operator=(struct BlockMaterialInstancesComponent &&);
    MCAPI ~BlockMaterialInstancesComponent();

protected:

private:

};