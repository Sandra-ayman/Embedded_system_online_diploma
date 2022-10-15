/*
 * FIFO.c
 *
 *  Created on: Oct 7, 2022
 *      Author: 20109
 */
#include "FIFO.h"
//FIFO APIs
//FIFO initialization
FIFO_Status FIFO_Init(FIFO_Buf_t* fifo_buf,element_type* buf,uint32_t length)
{
	//check FIFO is NULL
	if(buf == NULL)
	{
		return FIFO_null;
	}
	//FIFO initialization
	fifo_buf->base = buf;
	fifo_buf->head = buf;
	fifo_buf->tail = buf;
	fifo_buf->count =0;
	fifo_buf->length = length;
	return FIFO_no_error;
}
//FIFO enqueue
FIFO_Status FIFO_enqueue(FIFO_Buf_t* fifo_buf,element_type item)
{
	//check FIFO is Init
	if(!fifo_buf->base || !fifo_buf->head || !fifo_buf->tail)
	{
		return FIFO_null;
	}
	//check FIFO is Full
	if(FIFO_Is_Full(fifo_buf) == FIFO_full)
	{
		return FIFO_full;
	}
	//FIFO Enqueue
	*(fifo_buf->head) = item;
	fifo_buf->count++;
	//FIFO Circular
	if(fifo_buf->head == (fifo_buf->base + (fifo_buf->length * sizeof(element_type))))
	{
		fifo_buf->head = fifo_buf->base;
	}
	else
	{
		fifo_buf->head++;
	}
	return FIFO_no_error;

}
//FIFO dequeue
FIFO_Status FIFO_dequeue(FIFO_Buf_t* fifo_buf,element_type* item)
{
	//check FIFO is Init
	if(!fifo_buf->base || !fifo_buf->head || !fifo_buf->tail)
	{
		return FIFO_null;
	}
	//check FIFO is empty
	if(fifo_buf->count == 0)
	{
		return FIFO_empty;
	}
	//FIFO dequeue
	*item = *(fifo_buf->tail);
	fifo_buf->count--;
	//FIFO Circular
	if(fifo_buf->tail == (fifo_buf->base + (fifo_buf->length*sizeof(element_type))))
	{
		fifo_buf->tail = fifo_buf->base;
	}
	else
	{
		fifo_buf->tail++;
	}
	return FIFO_no_error;
}
//check the FIFO is Full
FIFO_Status FIFO_Is_Full(FIFO_Buf_t* fifo_buf)
{
	//check FIFO is Init
	if(!fifo_buf->base || !fifo_buf->head || !fifo_buf->tail)
	{
		return FIFO_null;
	}
	//check FIFO is Full
	if(fifo_buf->count >= fifo_buf->length)
	{
		return FIFO_full;
	}
	return FIFO_no_error;
}
//print the FIFO
void FIFO_Print(FIFO_Buf_t* fifo_buf)
{
	element_type* temp;
	int i;
	//check FIFO is empty
	if(fifo_buf->count ==0)
	{
		printf("FIFO is Empty \n");
	}
	else
	{
		//print FIFO
		temp = fifo_buf->tail;
		printf("------FIFO print------\n");
		for(i=0;i<fifo_buf->count;i++)
		{
			printf("\t %x \n",*temp);
			temp++;
		}

		printf("----------------------\n");
	}

}

