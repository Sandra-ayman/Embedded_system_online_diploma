/*
 * LIFO.c
 *
 *  Created on: Oct 7, 2022
 *      Author: 20109
 */
#include "LIFO.h"
//LIFO APIs
//Add item into LIFO
LIFO_Status LIFO_Add_Item (LIFO_Buf_t* lifo_buf,unsigned int item)
{
	//check the LIFO is valid
	if(!lifo_buf->base || !lifo_buf->head)
	{
		return Lifo_Null;
	}
	//check the LIFO is Full
	if(lifo_buf->count == lifo_buf->length)
	{
		return Lifo_Full;
	}
	//Add an Item
	*(lifo_buf->head) = item;
	lifo_buf->head++;
	lifo_buf->count++;
	return Lifo_no_error;
}
//get item from LIFO
LIFO_Status LIFO_Get_Item (LIFO_Buf_t* lifo_buf,unsigned int* item)
{
	//check the LIFO is valid
	if(!lifo_buf->base || !lifo_buf->head)
	{
		return Lifo_Null;
	}
	//check the LIFO is empty
	if(lifo_buf->count == 0)
	{
		return Lifo_empty;
	}
	//get the item
	lifo_buf->head--;
	*item = *(lifo_buf->head);
	lifo_buf->count--;
	return Lifo_no_error;
}
//initialize the LIFO
LIFO_Status LIFO_Init (LIFO_Buf_t* lifo_buf,unsigned int* buf,unsigned int length)
{
	//check if the LIFO is not null
	if(buf == NULL)
	{
		return Lifo_Null;
	}
	//initialize the LIFO
	lifo_buf->base = buf;
	lifo_buf->head = buf;
	lifo_buf->length = length;
	lifo_buf->count =0;
	return Lifo_no_error;
}

