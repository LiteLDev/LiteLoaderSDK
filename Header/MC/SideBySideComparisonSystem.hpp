// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SideBySideComparisonSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDECOMPARISONSYSTEM
public:
    class SideBySideComparisonSystem& operator=(class SideBySideComparisonSystem const &) = delete;
    SideBySideComparisonSystem(class SideBySideComparisonSystem const &) = delete;
    SideBySideComparisonSystem() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIDEBYSIDECOMPARISONSYSTEM
#endif
    MCAPI static struct TickingSystemWithInfo createSideBySideComparisonSystem(class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::EntityInside>);
    MCAPI static class std::array<struct TickingSystemWithInfo, 6> createSideBySideExceptionSystems();



};