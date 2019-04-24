#include"../MCAL/DIO/DIO.h"
#include<avr/delay.h>
void main()
{


DIO_voidSetPinDirection(PORTC_ID,PIN0_ID,OUTPUT);

DIO_voidSetPinValue(PORTC_ID,PIN0_ID,HIGH);

}
