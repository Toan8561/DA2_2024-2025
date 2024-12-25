#include "header.h"

void setup() {
  // put your setup code here, to run once:
  // Serial_data.Bdata = 0;
  // Serial.begin(9600);
  Wire.begin();
  Wire.setClock(400000);
  Wire.beginTransmission(PCF8575_add);
  Wire.write(PCF8575_data1);
  Wire.write(PCF8575_data2);
  Wire.endTransmission();
}

void loop() {
  // Serial.println("Hello Computer");
  // delay(1000);
  // Serial_data = Serial.readBytesUntil() ;

  // Serial_data.Bdata = 0xA86AF0E9;
 
  // if (Serial.available() > 0){
  //   Serial_data.Bdata = Serial.read();
  //   Serial.print("Serial data string: 0x"); Serial.println(Serial_data.Bdata , HEX);
  // }
   
  
  // if (Serial_data.Bdata != 0) {
  //   Serial.print("Serial data string: 0x"); Serial.println(Serial_data.Bdata , HEX);

  //   Serial.print("Serial data of Motor 1: 0x"); Serial.println(Serial_data.Mdata.Moto1.byte , HEX);
  //   if (Serial_data.Mdata.Moto1.Mbyte.Poler) Serial.print("Motor 1 rotation counterclockwise, Speed: ");
  //     else Serial.printf("Motor 1 rotation clockwise, Speed: ");
  //   Serial.println(Serial_data.Mdata.Moto1.Mbyte.Speed<<1, HEX);

  //   Serial.print("Serial data of Motor 2: 0x"); Serial.println(Serial_data.Mdata.Moto2.byte , HEX);
  //   if (Serial_data.Mdata.Moto2.Mbyte.Poler) Serial.print("Motor 2 rotation counterclockwise, Speed: ");
  //     else Serial.printf("Motor 2 rotation clockwise, Speed: ");
  //   Serial.println(Serial_data.Mdata.Moto2.Mbyte.Speed<<1, HEX);

  //   Serial.print("Serial data of Motor 3: 0x"); Serial.println(Serial_data.Mdata.Moto3.byte , HEX);
  //   if (Serial_data.Mdata.Moto3.Mbyte.Poler) Serial.print("Motor 3 rotation counterclockwise, Speed: ");
  //     else Serial.printf("Motor 3 rotation clockwise, Speed: ");
  //   Serial.println(Serial_data.Mdata.Moto3.Mbyte.Speed<<1, HEX);

  //   Serial.print("Serial data of Motor 4: 0x"); Serial.println(Serial_data.Mdata.Moto4.byte , HEX);
  //   if (Serial_data.Mdata.Moto4.Mbyte.Poler) Serial.print("Motor 4 rotation counterclockwise, Speed: ");
  //     else Serial.printf("Motor 4 rotation clockwise, Speed: ");
  //   Serial.println(Serial_data.Mdata.Moto4.Mbyte.Speed<<1, HEX);

  // 

}