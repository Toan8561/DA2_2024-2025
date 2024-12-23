#ifndef HEADER_H
#define HEADER_H

#endif

#include <Arduino.h>
// #include <ros.h>
// #include <ros2arduino.h>

typedef struct M_BYTE {
    uint8_t Speed   : 6; /*LSb to Bit-6*/
    uint8_t Poler   : 1; 
    uint8_t En      : 1;/*MSb*/
} M_BYTE;

union MByte {
    M_BYTE Mbyte;
    uint8_t byte;
};

typedef struct M_DATA {
    MByte Moto1; /*LSB*/
    MByte Moto2;
    MByte Moto3;
    MByte Moto4; /*MSB*/
} M_DATA;

union MData {
    M_DATA Mdata;
    uint32_t Bdata;
} Serial_data; 



uint8_t buffer[4];