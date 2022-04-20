// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class UnverifiedCertificate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNVERIFIEDCERTIFICATE
public:
    class UnverifiedCertificate& operator=(class UnverifiedCertificate const &) = delete;
    UnverifiedCertificate() = delete;
#endif

public:
    MCAPI UnverifiedCertificate(class UnverifiedCertificate &&);
    MCAPI UnverifiedCertificate(class UnverifiedCertificate const &);
    MCAPI std::string getIdentityPublicKey() const;
    MCAPI std::string toString() const;
    MCAPI std::unique_ptr<class Certificate> verify(std::vector<std::string> const &) const;
    MCAPI ~UnverifiedCertificate();
    MCAPI static class UnverifiedCertificate fromString(std::string const &);

protected:

private:
    MCAPI UnverifiedCertificate(class WebToken const &, std::unique_ptr<class UnverifiedCertificate>);
    MCAPI void addToChain(class Json::Value &) const;

};