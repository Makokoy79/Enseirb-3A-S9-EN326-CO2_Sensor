#include "LoRaWanCo2.h"

 
LoRaWANInterface lorawan(radio);

// Max payload size can be LORAMAC_PHY_MAXPAYLOAD.
// This example only communicates with much shorter messages (<30 bytes).
// If longer messages are used, these buffers must be changed accordingly.
uint8_t tx_buffer[100];
uint8_t rx_buffer[100];

/*
 * Sets up an application dependent transmission timer in ms. Used only when Duty Cycling is off for testing
 */
#define TX_TIMER                        10000

sixtron::scd4x_measurement_t mesure_temperature;
    
sixtron::SCD4X capteur_co2(P1_I2C_SDA, P1_I2C_SCL);

LoRaWanCo2::LoRaWanCo2()
{
    ThisThread::sleep_for(1000ms);

    capteur_co2.start_periodic_measurement();

    callbacks.events = mbed::callback(this, &LoRaWanCo2::lora_event_handler);
    lorawan.add_app_callbacks(&callbacks);
}

LoRaWanCo2::~LoRaWanCo2()
{

}

int LoRaWanCo2::get_init_status()
{
    if (lorawan.initialize(&ev_queue) != LORAWAN_STATUS_OK) {
        printf("\r\n LoRa initialization failed! \r\n");
        return -1;
    }
    else
        return 0;
}

/**
 * Sends a message to the Network Server
 */
void LoRaWanCo2::send_message()
{
    int32_t sensor_value;
    uint16_t packet_len;
    int16_t retcode;

    capteur_co2.read_measurement(&mesure_temperature);
    printf("C02 = %d ppm\n", mesure_temperature.co2);
    printf("T = %.2f C\n", mesure_temperature.temperature);
    printf("RH = %.2f \n", mesure_temperature.rh);


    // packet_len = sprintf((char *) tx_buffer, "{\"co2\": %d, \"temperature\": %d, \"rh\": %d}",
    //                       mesure_temperature->co2,  mesure_temperature->temperature,  mesure_temperature->rh);

    packet_len = sprintf((char *) tx_buffer, "{\"co2\": %d, \"temperature\": %.2f, \"rh\": %.2f}",
                        mesure_temperature.co2, mesure_temperature.temperature, mesure_temperature.rh);


    // packet_len = sprintf((char *) tx_buffer, "{\"co2\": 22}");
    retcode = lorawan.send(MBED_CONF_LORA_APP_PORT, tx_buffer, packet_len,
                           MSG_UNCONFIRMED_FLAG);


    if (retcode < 0) {
        retcode == LORAWAN_STATUS_WOULD_BLOCK ? printf("send - WOULD BLOCK\r\n")
        : printf("\r\n send() - Error code %d \r\n", retcode);

        if (retcode == LORAWAN_STATUS_WOULD_BLOCK) {
            //retry in 3 seconds
            if (MBED_CONF_LORA_DUTY_CYCLE_ON) {
                ev_queue.call_in(3000, callback(this, &LoRaWanCo2::send_message));
            }
        }
        return;
    }

    printf("\r\n %d bytes scheduled for transmission \r\n", retcode);
    memset(tx_buffer, 0, sizeof(tx_buffer));
}


/**
 * Receive a message from the Network Server
 */
void LoRaWanCo2::receive_message()
{
    uint8_t port;
    int flags;
    int16_t retcode = lorawan.receive(rx_buffer, sizeof(rx_buffer), port, flags);

    if (retcode < 0) {
        printf("\r\n receive() - Error code %d \r\n", retcode);
        return;
    }

    printf(" RX Data on port %u (%d bytes): ", port, retcode);
    for (uint8_t i = 0; i < retcode; i++) {
        printf("%02x ", rx_buffer[i]);
    }
    printf("\r\n");
    
    memset(rx_buffer, 0, sizeof(rx_buffer));
}

/**
 * Event handler
 */
void LoRaWanCo2::lora_event_handler(lorawan_event_t event)
{
    switch (event) {
        case CONNECTED:
            printf("\r\n Connection - Successful \r\n");
            if (MBED_CONF_LORA_DUTY_CYCLE_ON) {
                this->send_message();
            } else {
                ev_queue.call_every(TX_TIMER, callback(this, &LoRaWanCo2::send_message));
            }

            break;
        case DISCONNECTED:
            ev_queue.break_dispatch();
            printf("\r\n Disconnected Successfully \r\n");
            break;
        case TX_DONE:
            printf("\r\n Message Sent to Network Server \r\n");
            if (MBED_CONF_LORA_DUTY_CYCLE_ON) {
                this->send_message();
            }
            break;
        case TX_TIMEOUT:
        case TX_ERROR:
        case TX_CRYPTO_ERROR:
        case TX_SCHEDULING_ERROR:
            printf("\r\n Transmission Error - EventCode = %d \r\n", event);
            // try again
            if (MBED_CONF_LORA_DUTY_CYCLE_ON) {
                this->send_message();
            }
            break;
        case RX_DONE:
            printf("\r\n Received message from Network Server \r\n");
            this->receive_message();
            break;
        case RX_TIMEOUT:
        case RX_ERROR:
            printf("\r\n Error in reception - Code = %d \r\n", event);
            break;
        case JOIN_FAILURE:
            printf("\r\n OTAA Failed - Check Keys \r\n");
            break;
        case UPLINK_REQUIRED:
            printf("\r\n Uplink required by NS \r\n");
            if (MBED_CONF_LORA_DUTY_CYCLE_ON) {
                this->send_message();
            }
            break;
        default:
            MBED_ASSERT("Unknown Event");
    }
}


lorawan_status_t LoRaWanCo2::connect()
{
    return lorawan.connect();
}

int LoRaWanCo2::set_confirmed_msg_retries(uint8_t count)
{
    if (lorawan.set_confirmed_msg_retries(count)
            != LORAWAN_STATUS_OK) {
        printf("\r\n set_confirmed_msg_retries failed! \r\n\r\n");
        return -1;
    }
    else
        return 0;
}

int LoRaWanCo2::get_enable_adaptive_datarate()
{
    if (lorawan.enable_adaptive_datarate() != LORAWAN_STATUS_OK) {
        printf("\r\n enable_adaptive_datarate failed! \r\n");
        return -1;
    }
    else
        return 0;
}

void LoRaWanCo2::dispatch_forever()
{
    ev_queue.dispatch_forever();
}



