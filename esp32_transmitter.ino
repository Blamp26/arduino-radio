#include <Wire.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(9600);  // Initialize serial communication with Arduino
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Initialize OLED
    Serial.println(F("OLED initialization failed"));
    for (;;);
  }
  display.clearDisplay();
}

void loop() {
  if (Serial.available() > 0) {
    int receivedSignal = Serial.parseInt();
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.setCursor(0, 0);
    display.print("Received Signal: ");
    display.println(receivedSignal);
    display.display();
  }
}
