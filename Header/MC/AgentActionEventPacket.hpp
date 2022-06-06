// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AgentActionEventPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTACTIONEVENTPACKET
public:
    class AgentActionEventPacket& operator=(class AgentActionEventPacket const &) = delete;
    AgentActionEventPacket(class AgentActionEventPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~AgentActionEventPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENTACTIONEVENTPACKET
#endif
    MCAPI AgentActionEventPacket(std::string const &, enum AgentActionType, class Json::Value const &);
    MCAPI AgentActionEventPacket();

protected:

private:

};