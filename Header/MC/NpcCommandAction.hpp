// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NpcCommandAction {

#define AFTER_EXTRA
// Add Member There
public:
struct SavedCommand {
    SavedCommand() = delete;
    SavedCommand(SavedCommand const&) = delete;
    SavedCommand(SavedCommand const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCCOMMANDACTION
public:
    class NpcCommandAction& operator=(class NpcCommandAction const &) = delete;
    NpcCommandAction(class NpcCommandAction const &) = delete;
#endif

public:
    /*0*/ virtual ~NpcCommandAction();
    /*1*/ virtual class Json::Value toJson();
    /*2*/ virtual bool fromJson(class Json::Value const &);
    MCAPI NpcCommandAction();
    MCAPI std::vector<struct NpcCommandAction::SavedCommand> & getCommands();
    MCAPI void setCommands(std::vector<struct NpcCommandAction::SavedCommand> &&);
    MCAPI static char const COMMAND_DELIMITER;

protected:

private:
    MCAPI static std::string const COMMAND_LINE_KEY;
    MCAPI static std::string const COMMAND_VERSION_KEY;

};