#include <VirtualWire.h>  // Ensure you have the VirtualWire library

const int TX_PIN = 3;  // Pin connected to RX470C-V01 data pin

void setup() {
    Serial.begin(9600);
    vw_set_tx_pin(TX_PIN);
    vw_setup(2000);  // Bits per second
}

void loop() {
    const char *message = "Hello from Uno!";
    
    vw_send((uint8_t *)message, strlen(message));
    vw_wait_tx();  // Wait until the message is sent
    Serial.println("Sent: Hello from Uno!");
    delay(1000);  // Send every second
}
