// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RegistryKey {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REGISTRYKEY
public:
    class RegistryKey& operator=(class RegistryKey const&) = delete;
    RegistryKey(class RegistryKey const&) = delete;
    RegistryKey() = delete;
#endif

public:
    MCAPI operator bool();
    MCAPI bool readValue(char const*, unsigned long&) const;
    MCAPI bool readValue(char const*, std::string&) const;
    MCAPI ~RegistryKey();
    MCAPI static class RegistryKey open(struct HKEY__*, char const*, unsigned long);

protected:

private:

};