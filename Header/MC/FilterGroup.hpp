// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "FilterTest.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FilterGroup {

#define AFTER_EXTRA
// Add Member There
public:
enum CollectionType;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERGROUP
public:
    class FilterGroup& operator=(class FilterGroup const &) = delete;
    FilterGroup() = delete;
#endif

public:
    /*0*/ virtual ~FilterGroup();
    /*1*/ virtual class std::shared_ptr<class FilterGroup> _createSubgroup(enum FilterGroup::CollectionType) const = 0;
    /*2*/ virtual bool _setupContext(class FilterTest const &, struct FilterContext &) const;
    /*3*/ virtual bool _handleUnknownMember(std::string const &, class Json::Value const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILTERGROUP
#endif
    MCAPI FilterGroup(class FilterGroup const &);
    MCAPI bool addFilterTest(struct FilterTest::Definition const &, struct FilterInputs const &);
    MCAPI bool addFilterTest(std::string const &, struct FilterInputs const &);
    MCAPI bool empty() const;
    MCAPI bool evaluate(class std::array<struct FilterContext, 10> &) const;
    MCAPI std::vector<class std::shared_ptr<class FilterGroup>> const & getChildren() const;
    MCAPI std::vector<class std::shared_ptr<class FilterTest>> const & getMembers() const;
    MCAPI bool parse(class Json::Value const &);
    MCAPI void serialize(class Json::Value &) const;

protected:
    MCAPI bool _parseFilterInputs(class Json::Value const &, struct FilterTest::Definition const &, struct FilterInputs &);
    MCAPI bool _parseFilterParam(std::string const &, std::string const &, class Json::Value const &, struct FilterParamDefinition const &, class FilterInput &);
    MCAPI bool _parseMember(std::string const &, class Json::Value const &);
    MCAPI bool _parseObject(std::string const &, class Json::Value const &);
    MCAPI bool _parseTest(class Json::Value const &);

private:

};