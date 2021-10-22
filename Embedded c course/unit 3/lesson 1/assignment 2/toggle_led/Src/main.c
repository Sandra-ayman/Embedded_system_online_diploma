/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include "stdint.h"
//registers addresses
#define RCC_BASE 0x40021000
#define GPIOA_BASE 0x40010800
#define RCC_APB2ENR *(volatile uint32_t *) (RCC_BASE +0x18)
#define GPIOA_CRH   *(volatile uint32_t *) ( GPIOA_BASE + 0x04)
#define GPIOA_ODR   *(volatile uint32_t *) (GPIOA_BASE +0x0c)

#define RCC_IOPAEN (1<<2)
typedef volatile unsigned int vuint32_t;
//bit fields
typedef union
{
	vuint32_t all_fields;
	struct
	{
		vuint32_t reserved:13;
		vuint32_t pin13:1;
	}pin;

}R_ODR_t;
volatile R_ODR_t* R_ODR = (volatile R_ODR_t*) (GPIOA_BASE +0x0c) ;
int main(void)
{
	int i;
	RCC_APB2ENR |=RCC_IOPAEN;
	GPIOA_CRH &=0xff0fffff;
	GPIOA_CRH |=0x00200000;
	while(1)
	{
		R_ODR->pin.pin13=1;
		for(i=0;i<5000;i++);//delay
		R_ODR->pin.pin13=0;
		for(i=0;i<5000;i++);//delay
	}
}
