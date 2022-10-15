/*
 * main.c
 *
 *  Created on: Oct 7, 2022
 *      Author: 20109
 */
#include "LIFO.h"

int main()
{
	unsigned int i,temp=0;
	LIFO_Buf_t Uart_lifo,I2c_lifo;
	//static allocation
	LIFO_Init(&Uart_lifo,buffer1,buffer1_size);
	//dynamic allocation
	unsigned int* buffer2=(unsigned int*)malloc(5*sizeof(unsigned int));
	LIFO_Init(&I2c_lifo,buffer2,buffer1_size);
	//Add item into UART Buffer
	for(i=0;i<5;i++)
	{
		if(LIFO_Add_Item(&Uart_lifo,i)==Lifo_no_error)
		{
			printf("Uart_LIFO Add: %d\n",i);
		}
	}
	printf("-------------------------\n");
	//Add item into I2C Buffer
	for(i=0;i<5;i++)
	{
		if(LIFO_Add_Item(&I2c_lifo,i)==Lifo_no_error)
		{
			printf("I2C_LIFO Add: %d\n",i);
		}
	}
	printf("-------------------------\n");
	//Get item from UART Buffer
	for(i=0;i<5;i++)
	{
		if(LIFO_Get_Item(&Uart_lifo,&temp)==Lifo_no_error)
		{
			printf("Uart_LIFO Get: %d\n",temp);
		}
	}
	printf("-------------------------\n");
	//Get item from I2C Buffer
	for(i=0;i<5;i++)
	{
		if(LIFO_Get_Item(&I2c_lifo,&temp)==Lifo_no_error)
		{
			printf("I2C_LIFO Get: %d\n",temp);
		}
	}
	printf("-------------------------\n");
	return 0;
}


