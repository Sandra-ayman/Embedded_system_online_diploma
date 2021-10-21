/*
 * Platform_Types.h
 *
 *  Created on: Oct 21, 2021
 *      Author: 20109
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_
#include "stdio.h"

#define CPU_TYPE CPU_TYPE_32
#define CPU_BIT_ORDER MSB_FIRST
#define CPU_BYTE_ORDER HIGH_BYTE_FIRST

#ifndef TRUE
#define TRUE ((boolean)1)
#endif
#ifndef FALSE
#define FALSE ((boolean)0)
#endif

typedef unsigned long boolean;
typedef signed   char sint8;
typedef


#endif /* PLATFORM_TYPES_H_ */
