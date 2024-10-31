Wiring nRF24L01 to Arduino Uno:

VCC -> 3.3V
GND -> GND
CE -> Pin 9
CSN -> Pin 10
SCK -> Pin 13
MOSI -> Pin 11
MISO -> Pin 12



Wiring nRF24L01 to ESP32:

VCC -> 3.3V (use a stable 3.3V regulator if needed, as nRF24L01 is sensitive to power variations)
GND -> GND
CE -> GPIO 4 (or any free GPIO)
CSN -> GPIO 5 (or any free GPIO)
SCK -> GPIO 18
MOSI -> GPIO 23
MISO -> GPIO 19
