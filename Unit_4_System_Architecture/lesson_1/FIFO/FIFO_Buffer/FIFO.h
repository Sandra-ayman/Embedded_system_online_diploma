/*
 * FIFO.h
 *
 *  Created on: Oct 7, 2022
 *      Author: 20109
 */

#ifndef FIFO_H_
#define FIFO_H_

//libraries
#include "stdio.h"
#include "stdint.h"

//User Configuration
//select the type of element(uint8_t, uint16_t, uint32_t, ...)
#define element_type uint8_t

//the size of the buffer
#define buffer_size 5

//the Buffer definition
element_type Uart_buffer[buffer_size];

//FIFO data type
typedef struct{
	uint32_t length;
	uint32_t count;
	element_type* base;
	element_type* head;
	element_type* tail;
}FIFO_Buf_t;

//FIFO status
typedef enum{
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_null
}FIFO_Status;

//FIFO APIs
//FIFO initialization
FIFO_Status FIFO_Init(FIFO_Buf_t* fifo_buf,element_type* buf,uint32_t length);
//FIFO enqueue
FIFO_Status FIFO_enqueue(FIFO_Buf_t* fifo_buf,element_type item);
//FIFO dequeue
FIFO_Status FIFO_dequeue(FIFO_Buf_t* fifo_buf,element_type* item);
//check the FIFO is Full
FIFO_Status FIFO_Is_Full(FIFO_Buf_t* fifo_buf);
//print the FIFO
void FIFO_Print(FIFO_Buf_t* fifo_buf);

#endif /* FIFO_H_ */
