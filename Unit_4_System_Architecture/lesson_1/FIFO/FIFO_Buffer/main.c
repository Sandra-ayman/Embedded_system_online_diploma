/*
 * main.c
 *
 *  Created on: Oct 7, 2022
 *      Author: 20109
 */
#include "FIFO.h"

int main()
{
	//create FIFO
	FIFO_Buf_t FIFO_Uart;
	element_type i,temp=0;

	//test the FIFO initialization
	if(FIFO_Init(&FIFO_Uart,Uart_buffer,5)==FIFO_no_error)
	{
		printf("FIFO Init is Done\n");
	}

	//test the FIFO Enqueue
	for(i=0;i<7;i++)
	{
		printf("FIFO Enqueue (%x)\n",i);
		if(FIFO_enqueue(&FIFO_Uart,i)==FIFO_no_error)
		{
			printf("\tFIFO Enqueue is Done\n");
		}
		else
		{
			printf("\tFIFO Enqueue is Failed\n");
		}
	}
	FIFO_Print(&FIFO_Uart);

	//test FIFO Dequeue
	if(FIFO_dequeue(&FIFO_Uart,&temp)==FIFO_no_error)
	{
		printf("FIFO Dequeue %x is Done\n",temp);
	}
	if(FIFO_dequeue(&FIFO_Uart,&temp)==FIFO_no_error)
	{
		printf("FIFO Dequeue %x is Done\n",temp);
	}
	FIFO_Print(&FIFO_Uart);

	return 0;
}

