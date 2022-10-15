/*
 * LIFO.h
 *
 *  Created on: Oct 7, 2022
 *      Author: 20109
 */

#ifndef LIFO_H_
#define LIFO_H_
//libraries
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"

//user configuration
//select the element type (unit8_t,uint16_t,uint32_t,...)
//the default element type
#define element_type uint32_t

//buffer size
#define buffer1_size 5

//the buffer definition
element_type buffer1[buffer1_size];

//type definitions
typedef struct {
	unsigned int length;
	unsigned int count;
	unsigned int* base;
	unsigned int* head;
}LIFO_Buf_t;

//LIFO status
typedef enum {
	Lifo_no_error,
	Lifo_Full,
	Lifo_empty,
	Lifo_Null
}LIFO_Status;

//LIFO APIs
//Add item into LIFO
LIFO_Status LIFO_Add_Item (LIFO_Buf_t* lifo_buf,unsigned int item);
//get item from LIFO
LIFO_Status LIFO_Get_Item (LIFO_Buf_t* lifo_buf,unsigned int* item);
//initialize the LIFO
LIFO_Status LIFO_Init (LIFO_Buf_t* lifo_buf,unsigned int* buf,unsigned int length);




#endif /* LIFO_H_ */
