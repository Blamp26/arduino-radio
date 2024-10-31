const int rxPin = 2; // RX470C-V01 data pin connected to Arduino Uno pin 2

void setup() {
  Serial.begin(9600);  // Initialize serial communication to ESP32
  pinMode(rxPin, INPUT);
}

void loop() {
  int receivedSignal = digitalRead(rxPin);  // Read signal
  Serial.println(receivedSignal);  // Send to ESP32
  delay(50);  // Adjust based on the frequency of signals
}
