// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BaseContainerMenu {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASECONTAINERMENU
public:
    class BaseContainerMenu& operator=(class BaseContainerMenu const&) = delete;
    BaseContainerMenu(class BaseContainerMenu const&) = delete;
    BaseContainerMenu() = delete;
#endif

public:
    /*
    inline bool isResultSlot(int a0){
        bool (BaseContainerMenu::*rv)(int);
        *((void**)&rv) = dlsym("?isResultSlot@BaseContainerMenu@@UEAA_NH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline bool isSlotDirty(int a0){
        bool (BaseContainerMenu::*rv)(int);
        *((void**)&rv) = dlsym("?isSlotDirty@BaseContainerMenu@@UEAA_NH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline void containerContentChanged(int a0){
        void (BaseContainerMenu::*rv)(int);
        *((void**)&rv) = dlsym("?containerContentChanged@BaseContainerMenu@@UEAAXH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline void setData(int a0, int a1){
        void (BaseContainerMenu::*rv)(int, int);
        *((void**)&rv) = dlsym("?setData@BaseContainerMenu@@UEAAXHH@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1));
    }
    inline enum ContainerID getContainerId() const{
        enum ContainerID (BaseContainerMenu::*rv)() const;
        *((void**)&rv) = dlsym("?getContainerId@BaseContainerMenu@@UEBA?AW4ContainerID@@XZ");
        return (this->*rv)();
    }
    inline enum ContainerType getContainerType() const{
        enum ContainerType (BaseContainerMenu::*rv)() const;
        *((void**)&rv) = dlsym("?getContainerType@BaseContainerMenu@@UEBA?AW4ContainerType@@XZ");
        return (this->*rv)();
    }
    inline  ~BaseContainerMenu(){
         (BaseContainerMenu::*rv)();
        *((void**)&rv) = dlsym("??1BaseContainerMenu@@UEAA@XZ");
        return (this->*rv)();
    }
    inline void broadcastChanges(){
        void (BaseContainerMenu::*rv)();
        *((void**)&rv) = dlsym("?broadcastChanges@BaseContainerMenu@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void setContainerId(enum ContainerID a0){
        void (BaseContainerMenu::*rv)(enum ContainerID);
        *((void**)&rv) = dlsym("?setContainerId@BaseContainerMenu@@UEAAXW4ContainerID@@@Z");
        return (this->*rv)(std::forward<enum ContainerID>(a0));
    }
    inline void setContainerType(enum ContainerType a0){
        void (BaseContainerMenu::*rv)(enum ContainerType);
        *((void**)&rv) = dlsym("?setContainerType@BaseContainerMenu@@UEAAXW4ContainerType@@@Z");
        return (this->*rv)(std::forward<enum ContainerType>(a0));
    }
    */

protected:
    MCAPI void _saveLastSlots(class Container*);

private:

};