// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "reflection.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CerealDocumentUpgradeStep {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREALDOCUMENTUPGRADESTEP
public:
    CerealDocumentUpgradeStep() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREALDOCUMENTUPGRADESTEP
#endif
    MCAPI CerealDocumentUpgradeStep(class CerealDocumentUpgradeStep const &);
    MCAPI CerealDocumentUpgradeStep(class SemVersion const &, struct reflection::Schema const &);
    MCAPI void addUpgrade(class std::shared_ptr<class CerealSchemaUpgrade>);
    MCAPI bool apply(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &, class SemVersion const &);
    MCAPI bool canUpgrade(class SemVersion const &) const;
    MCAPI class SemVersion const & getTargetVersion() const;
    MCAPI class CerealDocumentUpgradeStep & operator=(class CerealDocumentUpgradeStep const &);



};