#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("เริ่มอ่านค่า ADC จากหลายขา...");
}

void loop() {
  Serial.print("GPIO32=");
  Serial.print(analogRead(32));
  Serial.print("  GPIO34=");
  Serial.print(analogRead(34));
  Serial.print("  GPIO35=");
  Serial.print(analogRead(35));
  Serial.print("  GPIO36=");
  Serial.print(analogRead(36));
  Serial.print("  GPIO39=");
  Serial.println(analogRead(39));
  delay(300);
}