// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SaveTransactionManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAVETRANSACTIONMANAGER
public:
    class SaveTransactionManager& operator=(class SaveTransactionManager const &) = delete;
    SaveTransactionManager(class SaveTransactionManager const &) = delete;
    SaveTransactionManager() = delete;
#endif

public:
    /*0*/ virtual ~SaveTransactionManager();
    MCAPI SaveTransactionManager(class WorkerPool &, class Scheduler &, class std::function<void (bool)>);
    MCAPI void onBeginCompaction();
    MCAPI void onEndCompaction();

protected:

private:
    MCAPI void _hideGlobalSaveIcon();
    MCAPI void _showGlobalSaveIcon();

};