// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ResourcePackManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKMANAGER
public:
    class ResourcePackManager& operator=(class ResourcePackManager const &) = delete;
    ResourcePackManager(class ResourcePackManager const &) = delete;
    ResourcePackManager() = delete;
#endif

public:
    /*0*/ virtual ~ResourcePackManager();
    /*1*/ virtual bool load(class ResourceLocation const &, std::string &) const;
    /*2*/ virtual bool load(class ResourceLocation const &, std::string &, std::vector<std::string> const &) const;
    /*3*/ virtual bool load(class ResourceLocationPair const &, std::string &, std::vector<std::string> const &) const;
    /*4*/ virtual std::vector<class LoadedResourceData> loadAllVersionsOf(class ResourceLocation const &) const;
    /*5*/ virtual bool isInStreamableLocation(class ResourceLocation const &) const;
    /*6*/ virtual bool isInStreamableLocation(class ResourceLocation const &, std::vector<std::string> const &) const;
    /*7*/ virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const &) const;
    /*8*/ virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const &, std::vector<std::string> const &) const;
    /*9*/ virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const &) const;
    /*10*/ virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const &, std::vector<std::string>) const;
    /*11*/ virtual struct std::pair<int, std::string const &> getPackStackIndexOfResource(class ResourceLocation const &, std::vector<std::string> const &) const;
    /*12*/ virtual bool hasCapability(class gsl::basic_string_span<char const, -1>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKMANAGER
#endif
    MCAPI ResourcePackManager(class std::function<class Core::PathBuffer<std::string> (void)>, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentTierManager const>> const &, bool);
    MCAPI void clearStack(enum ResourcePackStackType, bool);
    MCAPI int composeFullStack(class ResourcePackStack &, class ResourcePackStack const &, class ResourcePackStack const &, class ResourcePackStack const &) const;
    MCAPI class SemVersion getFullStackMinEngineVersion() const;
    MCAPI class PackSourceReport const * getPackSourceReport() const;
    MCAPI std::vector<class Core::PathBuffer<std::string>> getResourcesOfGroup(std::string const &) const;
    MCAPI std::vector<class Core::PathBuffer<std::string>> getResourcesOfGroup(class PackInstance const &, std::string const &) const;
    MCAPI class ResourcePackStack const & getStack(enum ResourcePackStackType) const;
    MCAPI void handlePendingStackChanges();
    MCAPI bool hasResource(class ResourceLocation const &) const;
    MCAPI bool loadAllVersionsOf(class ResourceLocation const &, class ResourcePackMergeStrategy &) const;
    MCAPI void registerResourcePackListener(class ResourcePackListener &);
    MCAPI void setPackSourceReport(class PackSourceReport &&);
    MCAPI bool setStack(std::unique_ptr<class ResourcePackStack>, enum ResourcePackStackType, bool);
    MCAPI void unRegisterResourcePackListener(class ResourcePackListener &);
    MCAPI bool upgradeJson(std::string &, class Core::Path const &);

protected:

private:
    MCAPI void _calculateMinEngineVersionFromFullStack();
    MCAPI void _composeFullStack();
    MCAPI void _getResourcesOfGroup(class PackInstance const &, std::string const &, std::vector<class Core::PathBuffer<std::string>> &) const;
    MCAPI void _updateLanguageSubpacks();

};