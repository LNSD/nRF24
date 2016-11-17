/**
 * @file Debug.h
 *
 * Copyright (C) 2016 Lorenzo Delgado <lorenzo.delgado@lnsd.es>
 * All rights reserved.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef NRF24_DEBUG_H
#define NRF24_DEBUG_H

#include "Arduino.h"
#include "Definitions.h"


namespace NRF24 {

    /**
     * @name Debug helper class
     */
    class Debug
    {
    public:

        /**
         * Parse CONFIG register content and show debug info
         * @param content Register content
         */
        static void debugConfigRegister(unsigned int content);

        /**
         * Parse EN_AA register content and show debug info
         * @param content Register content
         */
        static void debugEnAARegister(unsigned int content);

        /**
         * Parse EN_RXADDR register content and show debug info
         * @param content Register content
         */
        static void debugEnRxAddrRegister(unsigned int content);

        /**
         * Parse SETUP_AW register content and show debug info
         * @param content Register content
         */
        static void debugSetupAWRegister(unsigned int content);

        /**
         * Parse SETUP_RETR register content and show debug info
         * @param content Register content
         */
        static void debugSetupRetrRegister(unsigned int content);

        /**
         * Parse RF_CH register content and show debug info
         * @param content Register content
         */
        static void debugRFChRegister(unsigned int content);

        /**
         * Parse RF_SETUP register content and show debug info
         * @param content Register content
         */
        static void debugRFSetupRegister(unsigned int content);

        /**
         * Parse STATUS register content and show debug info
         * @param content Register content
         */
        static void debugStatusRegister(unsigned int content);

        /**
         * Parse OBSERVE_TX register content and show debug info
         * @param content Register content
         */
        static void debugObserveTxRegister(unsigned int content);

        /**
         * Parse RPD register content and show debug info
         * @param content Register content
         */
        static void debugRpdRegister(unsigned int content);

        /**
         * Parse RX_ADDR_P# register content and show debug info. Long address (5 bytes max)
         * @param content Register content
         * @param pipe Pipe number
         */
        static void debugRxPipeAddressRegister(unsigned int *content, NRF24::RxPipe pipe, uint8_t len);

        /**
         * Parse TX_ADDR register content and show debug info
         * @param content Register content
         */
        static void debugTxAddressRegister(uint8_t *content, uint8_t len);

        /**
         * Parse RX_PW_P# registers content and show debug info
         * @param content Register content
         * @param pipe Pipe number
         */
        static void debugRxPipePayloadWidthRegister(uint8_t content, RxPipe pipe);

        /**
         * Parse FIFO_STATUS register content and show debug info
         * @param content Register content
         */
        static void debugFifoStatusRegister(uint8_t content);

        /**
         * Parse DYNPD register content and show debug info
         * @param content Register content
         */
        static void debugDynpdRegister(uint8_t content);

        /**
         * Parse FEATURE register content and show debug info
         * @param content Register content
         */
        static void debugFeatureRegister(uint8_t content);
    };
}

#endif //NRF24_DEBUG_H
