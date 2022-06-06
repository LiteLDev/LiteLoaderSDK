// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CodebuilderComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDERCOMPONENT
public:
    class CodebuilderComponent& operator=(class CodebuilderComponent const &) = delete;
    CodebuilderComponent(class CodebuilderComponent const &) = delete;
    CodebuilderComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CODEBUILDERCOMPONENT
#endif
    MCAPI enum CodeBuilderExecutionState::CodeStatus getCodeStatus() const;
    MCAPI void resetCodeStatus();
    MCAPI void setCodeStatus(std::string const &);
    MCAPI enum CodeBuilderExecutionState::CodeStatus stringToCodeStatus(std::string const &) const;

protected:

private:

};