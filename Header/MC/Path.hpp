// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Path {

#define AFTER_EXTRA
// Add Member There
public:
class Node {
public:
    Node() = delete;
    Node(Node const&) = delete;
    Node(Node const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PATH
public:
    class Path& operator=(class Path const &) = delete;
    Path(class Path const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PATH
#endif
    MCAPI Path();
    MCAPI class Vec3 currentPos(class Actor const *) const;
    MCAPI class BlockPos const & currentPos() const;
    MCAPI bool endsInXZ(class Vec3 const &);
    MCAPI enum PathCompletionType getCompletionType() const;
    MCAPI class Vec3 getEndPos() const;
    MCAPI unsigned __int64 getIndex() const;
    MCAPI class BlockPos const & getLastPos() const;
    MCAPI class BlockPos const & getNodePos(unsigned __int64) const;
    MCAPI enum NodeType getNodeType(unsigned __int64) const;
    MCAPI class Vec3 getPos(class Actor const *, unsigned __int64) const;
    MCAPI unsigned __int64 getSize() const;
    MCAPI bool isDone() const;
    MCAPI bool isValid() const;
    MCAPI std::unique_ptr<class Path> makeCopy() const;
    MCAPI void next();
    MCAPI bool sameAs(class Path *) const;
    MCAPI void setIndex(unsigned __int64);
    MCAPI void setSize(unsigned __int64);
    MCAPI ~Path();

protected:

private:
    MCAPI void buildFromNodes(std::vector<class Path::Node> &&, enum PathCompletionType);

};