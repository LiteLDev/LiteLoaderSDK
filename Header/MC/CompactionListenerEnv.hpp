// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TransactionalWorldBlockTarget.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CompactionListenerEnv : public TransactionalWorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPACTIONLISTENERENV
public:
    class CompactionListenerEnv& operator=(class CompactionListenerEnv const &) = delete;
    CompactionListenerEnv(class CompactionListenerEnv const &) = delete;
    CompactionListenerEnv() = delete;
#endif

public:
    /*0*/ virtual ~CompactionListenerEnv();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPACTIONLISTENERENV
    MCVAPI void Schedule(void ( *)(void *), void *);
#endif
    MCAPI CompactionListenerEnv(class leveldb::Env *);
    MCAPI void setCompactionCallback(class std::function<void (enum CompactionStatus)>);

protected:

private:

};