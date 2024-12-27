#include "header.h"

PCF8575 pcf0(PCF8575_0);
PCF8575 pcf1(PCF8575_1);

void setup() {
  Wire.begin();
  Wire.setClock(400000);
  pcf0.begin();
  pcf0.write16(0xFFFF);
  pcf1.begin();
  pinMode(2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2), keyChanged, FALLING);

}

void loop() {
  if(keyChange){
    keyChange = false;
    buffer[0] = pcf0.read16();
    buffer[1] = ~buffer[0];
    pcf1.write16(buffer[1]);
  }
}