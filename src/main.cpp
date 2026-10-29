#include <Arduino.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);  // เปิดไฟ LED (NodeMCU Active LOW)
  Serial.println("ON");
  delay(500);
  
  digitalWrite(LED_BUILTIN, HIGH); // ปิดไฟ LED
  Serial.println("OFF");
  delay(500);
}