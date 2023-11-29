/**
 * Copyright (c) 2017, Arm Limited and affiliates.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <stdio.h>

#include "LoRaWanCo2.h"

#include "lorawan/LoRaWANInterface.h"
// #include "lorawan/system/lorawan_data_structures.h"
// #include "events/EventQueue.h"

// Application helpers
#include "DummySensor.h"
#include "trace_helper.h"
// #include "lora_radio_helper.h"
#include "mbed_sensirion-scd4x/scd4x/scd4x.h"

// using namespace events;


/**
 * Maximum number of retries for CONFIRMED messages before giving up
 */
#define CONFIRMED_MSG_RETRY_COUNTER     3

/**
 * Dummy pin for dummy sensor
 */
#define PC_9                            0

/**
 * Dummy sensor class object
 */
DS1820  ds1820(PC_9);


/**
 * Mbed API LoRaWanCo2 constructor
 */
LoRaWanCo2 lorawan_co2;

/**
 * Constructing Mbed LoRaWANInterface and passing it the radio object from lora_radio_helper.
 */
// static LoRaWANInterface lorawan(radio);



/**
 * Entry point for application
 */



// EOF



int main(void)
{
    DigitalOut pin(LORA_ANTSW_PWR, 1);
    

    // setup tracing
    setup_trace();

    // stores the status of a call to LoRaWAN protocol
    lorawan_status_t retcode;

    // Initialize LoRaWAN stack
    // if (lorawan.initialize(&ev_queue) != LORAWAN_STATUS_OK) {
    //     printf("\r\n LoRa initialization failed! \r\n");
    //     return -1;
    // }
    if (lorawan_co2.get_init_status() == -1)
        return -1;

    printf("\r\n Mbed LoRaWANStack initialized \r\n");

    // prepare application callbacks
    // callbacks.events = mbed::callback(lora_event_handler);
    // // lorawan.add_app_callbacks(&callbacks);
    // lorawan_co2.add_app_callbacks(&callbacks);

    // Set number of retries in case of CONFIRMED messages
    // if (lorawan.set_confirmed_msg_retries(CONFIRMED_MSG_RETRY_COUNTER)
    //         != LORAWAN_STATUS_OK) {
    //     printf("\r\n set_confirmed_msg_retries failed! \r\n\r\n");
    //     return -1;
    // }
    if (lorawan_co2.set_confirmed_msg_retries(CONFIRMED_MSG_RETRY_COUNTER) == -1)
        return -1;

    printf("\r\n CONFIRMED message retries : %d \r\n",
           CONFIRMED_MSG_RETRY_COUNTER);

    // Enable adaptive data rate
    // if (lorawan.enable_adaptive_datarate() != LORAWAN_STATUS_OK) {
    //     printf("\r\n enable_adaptive_datarate failed! \r\n");
    //     return -1;
    // }
    if (lorawan_co2.get_enable_adaptive_datarate() == -1)
        return -1;

    printf("\r\n Adaptive data  rate (ADR) - Enabled \r\n");

    // retcode = lorawan.connect();
    retcode = lorawan_co2.connect();

    if (retcode == LORAWAN_STATUS_OK ||
            retcode == LORAWAN_STATUS_CONNECT_IN_PROGRESS) {
    } else {
        printf("\r\n Connection error, code = %d \r\n", retcode);
        return -1;
    }


    printf("\r\n Connection - In Progress ...\r\n");

    // make your event queue dispatching events forever
    // ev_queue.dispatch_forever();
    lorawan_co2.dispatch_forever();

    return 0;
}
