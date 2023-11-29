#ifndef LORAWANICO2_H_
#define LORAWANICO2_H_

#include "mbed.h"
#include "lorawan/LoRaWANInterface.h"
// #include "lorawan/LoRaWANStack.h"
// #include "mbed-os/events/include/events/EventQueue.h"
#include "events/EventQueue.h"
#include "lorawan/lorawan_types.h"
// #include "lorawan/LoRaRadio.h"
#include "lora_radio_helper.h"
// #include "lorawan/system/lorawan_data_structures.h"
#include "mbed_sensirion-scd4x/scd4x/scd4x.h"

/**
 * Maximum number of events for the event queue.
 * 10 is the safe number for the stack events, however, if application
 * also uses the queue for whatever purposes, this number should be increased.
 */
#define MAX_NUMBER_OF_EVENTS            10


class LoRaWanCo2 {
private:
    /**
     * Application specific callbacks
     */
    lorawan_app_callbacks_t callbacks;
    
public:

    LoRaWanCo2();
    ~LoRaWanCo2();

    int get_init_status();

    /**
     * Sends a message to the Network Server
     */
    void send_message();

    void receive_message();

    /**
     * Event handler.
     *
     * This will be passed to the LoRaWAN stack to queue events for the
     * application which in turn drive the application.
     */
    void lora_event_handler(lorawan_event_t event);

    lorawan_status_t connect();

    int set_confirmed_msg_retries(uint8_t count);

    int get_enable_adaptive_datarate();

    void dispatch_forever();

};

static EventQueue ev_queue(MAX_NUMBER_OF_EVENTS *EVENTS_EVENT_SIZE);

#endif /* LORAWANICO2_H_ */
/** @}*/
