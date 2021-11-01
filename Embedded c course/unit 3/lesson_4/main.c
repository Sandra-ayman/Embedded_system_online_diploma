//lab 3 unit 3 
//Eng.Sandra Ayman
#include "stdint.h"
#define SYSCTL_RCGC2_R    (*(volatile unsigned long*)(0x400fe108))
#define GPIO_PORTF_DIR_R  (*(volatile unsigned long*)(0x40025400))
#define GPIO_PORTF_DEN_R  (*(volatile unsigned long*)(0x4002551c))
#define GPIO_PORTF_DATA_R (*(volatile unsigned long*)(0x400253fc))

int main()
{
	volatile unsigned long Delay_Count;
	SYSCTL_RCGC2_R=0x20;
	for(Delay_Count=0;Delay_Count<200;Delay_Count++);
	GPIO_PORTF_DIR_R |= 1<<3;
	GPIO_PORTF_DEN_R |= 1<<3;
	while(1)
	{
		GPIO_PORTF_DATA_R |= 1<<3;
		for(Delay_Count=0;Delay_Count<20000;Delay_Count++);
		GPIO_PORTF_DATA_R &= ~(1<<3);
		for(Delay_Count=0;Delay_Count<20000;Delay_Count++);
	}
	return 0;
}