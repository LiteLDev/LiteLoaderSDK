// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EntityComponentFactoryCereal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCOMPONENTFACTORYCEREAL
public:
    class EntityComponentFactoryCereal& operator=(class EntityComponentFactoryCereal const &) = delete;
    EntityComponentFactoryCereal(class EntityComponentFactoryCereal const &) = delete;
    EntityComponentFactoryCereal() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENTITYCOMPONENTFACTORYCEREAL
#endif
    MCAPI void serializeComponentDefinitions(class DefinitionInstanceGroup &, class rapidjson::GenericValue<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>> &, class SemVersion const &) const;
    MCAPI class ICerealDefinitionSerializer * tryGetDefinitionSerializer(std::string const &) const;

protected:

private:

};