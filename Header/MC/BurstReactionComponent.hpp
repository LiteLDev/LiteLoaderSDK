// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BurstReactionComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BURSTREACTIONCOMPONENT
public:
    class BurstReactionComponent& operator=(class BurstReactionComponent const &) = delete;
    BurstReactionComponent(class BurstReactionComponent const &) = delete;
    BurstReactionComponent() = delete;
#endif

public:
    /*0*/ virtual ~BurstReactionComponent();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void _onEnd(class LabTableReaction &, class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BURSTREACTIONCOMPONENT
#endif

protected:

private:

};