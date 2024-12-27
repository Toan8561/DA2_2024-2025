#include "header.h"

void setup() {
  Wire.begin();
  Wire.setClock(400000);
  Wire.beginTransmission(PCF8575_add);
  Wire.write(PCF8575_data1);
  Wire.write(PCF8575_data2);
  Wire.endTransmission();
}

void loop() {

}