#include <VirtualWire.h>  // Ensure you have the VirtualWire library

const int RX_PIN = 22;  // Pin connected to RX470C-V01 data pin

void setup() {
    Serial.begin(9600);
    vw_set_rx_pin(RX_PIN);
    vw_setup(2000);  // Bits per second
    vw_rx_start();   // Start the receiver
}

void loop() {
    uint8_t buf[16];  // Buffer to hold the incoming message
    uint8_t buflen = sizeof(buf);

    if (vw_get_message(buf, &buflen)) {
        // Message received
        buf[buflen] = '\0';  // Null-terminate the string
        Serial.print("Received: ");
        Serial.println((char *)buf);
    }
}
