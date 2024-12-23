#include <stdio.h>
#include <stdlib.h>
#include <stdint-gcc.h>
#include <math.h>

#ifndef HEADER_H
#define HEADER_H

#endif

typedef struct M_BYTE {
    uint8_t Speed: 7; /*LSb to Bit-6*/
    uint8_t Poler: 1; /*MSb*/
} M_BYTE;

union MByte {
    M_BYTE Mbyte;
    char byte;
};

typedef struct M_DATA {
    M_BYTE Moto1; /*LSB*/
    M_BYTE Moto2;
    M_BYTE Moto3;
    M_BYTE Moto4; /*MSB*/
} M_DATA;

union MData {
    M_DATA Mdata;
    unsigned int Data;
} Demo; 


