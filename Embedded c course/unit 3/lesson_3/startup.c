//startup.c cortexM3
//Eng.Sandra
#include "stdint.h"
extern int main(void);
extern unsigned int _stack_top ;
extern unsigned int _E_TEXT;
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_BSS;
extern unsigned int _E_BSS;
int i;
void Reset_Handler(void);

void Default_Hanndler()
{
	Reset_Handler();
}

void NMI_Handler (void) __attribute__((weak, alias("Default_Hanndler")));
void H_Fault_Handler(void) __attribute__((weak, alias("Default_Hanndler")));
void MM_Fault_Handler(void)__attribute__((weak, alias("Default_Hanndler")));
void Bus_Handler(void)__attribute__((weak, alias("Default_Hanndler")));
void Usage_Fault_Handler(void)__attribute__((weak, alias("Default_Hanndler")));

uint32_t vector[] __attribute__((section(".vectors"))) = {
	(uint32_t) &_stack_top,
	(uint32_t) &Reset_Handler,
	(uint32_t) &NMI_Handler,
	(uint32_t) &H_Fault_Handler,
	(uint32_t) &MM_Fault_Handler,
	(uint32_t) &Bus_Handler,
	(uint32_t) &Usage_Fault_Handler
};
void Reset_Handler(void)
{
	//copy data from flash to SRAM
	unsigned int DATA_SIZE=(unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA ;
	unsigned char* p_src = (unsigned char*)&_E_TEXT;
	unsigned char* p_dst = (unsigned char*)&_S_DATA;
	for(i=0;i<DATA_SIZE;i++)
	{
		*((unsigned char*)p_dst++)=*((unsigned char*)p_src++);
	}
	//init the .bss section with zero
	unsigned int BSS_SIZE=(unsigned char*)&_E_BSS - (unsigned char*)&_S_BSS ;
	p_dst = (unsigned char*)&_S_BSS;
	for(i=0;i<DATA_SIZE;i++)
	{
		*((unsigned char*)p_dst++)=(unsigned char)0;
	}
	//jump to main()
	main();
}