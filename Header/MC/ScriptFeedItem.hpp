// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptFeedItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTFEEDITEM
public:
    class ScriptFeedItem& operator=(class ScriptFeedItem const&) = delete;
    ScriptFeedItem(class ScriptFeedItem const&) = delete;
    ScriptFeedItem() = delete;
#endif

public:
    MCAPI static class Scripting::ClassBindingBuilder<struct FeedItem> bind(struct Scripting::Version);

protected:

private:

};