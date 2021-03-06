// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct SerializerTraits {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERIALIZERTRAITS
public:
    struct SerializerTraits& operator=(struct SerializerTraits const &) = delete;
    SerializerTraits() = delete;
#endif

public:
    MCAPI SerializerTraits(struct SerializerTraits &&);
    MCAPI SerializerTraits(struct SerializerTraits const &);
    MCAPI struct SerializerTraits & name(std::string);
    MCAPI struct SerializerTraits & operator=(struct SerializerTraits &&);
    MCAPI struct SerializerTraits & validate(class std::function<bool (class entt::meta_any &, class SerializerContext &)>);
    MCAPI ~SerializerTraits();

protected:

private:
    MCAPI bool performValidation(class entt::meta_any, class SerializerContext &) const;

};