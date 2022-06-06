// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MemoryMappedFileAccess {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEMORYMAPPEDFILEACCESS
public:
    class MemoryMappedFileAccess& operator=(class MemoryMappedFileAccess const &) = delete;
    MemoryMappedFileAccess(class MemoryMappedFileAccess const &) = delete;
    MemoryMappedFileAccess() = delete;
#endif

public:
    /*0*/ virtual ~MemoryMappedFileAccess();
    /*1*/ virtual void * fopen(class Core::Path const &, std::string const &);
    /*2*/ virtual int fclose(void *);
    /*3*/ virtual int fseek(void *, __int64, int);
    /*4*/ virtual __int64 ftell(void *);
    /*5*/ virtual class IFileReadAccess const * getReadInterface() const;
    /*6*/ virtual class IFileWriteAccess * getWriteInterface();
    /*7*/ virtual void unload();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MEMORYMAPPEDFILEACCESS
#endif
    MCAPI MemoryMappedFileAccess(class gsl::not_null<class Bedrock::NonOwnerPointer<class IFileAccess>> const &, std::unique_ptr<class FileAccessTransforms>);
    MCAPI static class FileAccessTransforms const EMPTY_TRANSFORMS;

protected:

private:

};