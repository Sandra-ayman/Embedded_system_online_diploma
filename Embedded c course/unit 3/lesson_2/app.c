#include "uart.h"
unsigned char string_buffer[100] = "learn-in-depth:<sandra>" ;
unsigned char const string_buffer1[100] = "learn-in-depth:<sandra>" ;
void main(void)
{
	Uart_Send_String(string_buffer);
}