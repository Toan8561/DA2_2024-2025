#include "header.h"

void main(){

    printf("Scan byte data:"); 
    scanf("%x", &Demo.Data);

    printf("Size of motor data byte is %lu bytes\n", sizeof(union MByte));
    printf("Size of motor data string is %lu bytes\n", sizeof(union MData));

    // Demo.Data = 0xff2af94f ;

    printf("Size of motor 1 hex data is %x \n", Demo.Mdata.Moto1 );
    printf("Size of motor 2 hex data is %x \n", Demo.Mdata.Moto2 );
    printf("Size of motor 3 hex data is %x \n", Demo.Mdata.Moto3 );
    printf("Size of motor 4 hex data is %x \n", Demo.Mdata.Moto4 );

    if (Demo.Mdata.Moto1.Poler) printf("Motor 1 rotation counterclockwise \n");
    else printf("Motor 1 rotation clockwise \n");

    if (Demo.Mdata.Moto2.Poler) printf("Motor 2 rotation counterclockwise \n");
    else printf("Motor 2 rotation clockwise \n");

    if (Demo.Mdata.Moto3.Poler) printf("Motor 3 rotation counterclockwise \n");
    else printf("Motor 3 rotation clockwise \n");

    if (Demo.Mdata.Moto4.Poler) printf("Motor 4 rotation counterclockwise \n");
    else printf("Motor 4 rotation clockwise \n");

    return 0;
}
