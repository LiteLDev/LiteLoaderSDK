// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ArmorItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORITEMCOMPONENT
public:
    class ArmorItemComponent& operator=(class ArmorItemComponent const &) = delete;
    ArmorItemComponent(class ArmorItemComponent const &) = delete;
    ArmorItemComponent() = delete;
#endif

public:
    /*0*/ virtual ~ArmorItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARMORITEMCOMPONENT
#endif
    MCAPI ArmorItemComponent(class ComponentItem *);
    MCAPI enum ArmorTextureType getArmorTextureType() const;
    MCAPI int getArmorValue() const;
    MCAPI static void bindType();
    MCAPI static class HashedString const & getIdentifier();

protected:

private:

};