#ifndef NRF24DEBUG_H
#define NRF24DEBUG_H

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "NRF24L01.h"
#include "NRF24.h"

class NRF24Debug
{
public:
    // Debug functions
    static void parseToBoolean(boolean *bit, uint8_t byte);
    static void debugConfigRegister(uint8_t content);
    static void debugEnAARegister(uint8_t content);
    static void debugEnRxAddrRegister(uint8_t content);
    static void debugSetupAWRegister(uint8_t content);
    static void debugSetupRetrRegister(uint8_t content);
    static void debugRfChRegister(uint8_t content);
    static void debugRfSetupRegister(uint8_t content);
    static void debugStatusRegister(uint8_t content);
    static void debugObserveTxRegister(uint8_t content);
    static void debugRPDRegister(uint8_t content);

    static void debugDataPipeRxAddrRegister(uint8_t *content, NRF24::RxPipe_t pipe, uint8_t len);
    static void debugTxAddrRegister(uint8_t *content, uint8_t len);

    static void debugRxBytesPipeRegister(uint8_t content, NRF24::RxPipe_t pipe);
    static void debugFIFOStatusRegister(uint8_t content);
    
    static void debugDYNPDRegister(uint8_t content);
    static void debugFeatureRegister(uint8_t content);
};

#endif //NRF24DEBUG_H
