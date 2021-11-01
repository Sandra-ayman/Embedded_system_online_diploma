//startup.c cortexM3
//Eng.Sandra
#include "stdint.h"
extern int main();
extern unsigned int _E_TEXT;
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_BSS;
extern unsigned int _E_BSS;
volatile int i=0;
void Reset_Handler(void);

void Default_Hanndler()
{
	Reset_Handler();
}
//reserve Stack_Top with 1024 B (256*4=1024)
static unsigned long Stack_Top[256];

void NMI_Handler (void) __attribute__((weak, alias("Default_Hanndler")));
void H_Fault_Handler(void) __attribute__((weak, alias("Default_Hanndler")));

void (*g_p_Vector[])()__attribute__((section(".vectors"))) =
{
	(void (*)()) ((unsigned long)Stack_Top + sizeof(Stack_Top)),
	&Reset_Handler,
	&NMI_Handler,
	&H_Fault_Handler
};

void Reset_Handler(void)
{
	//copy data from flash to SRAM
	unsigned int DATA_SIZE=(unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA ;
	unsigned char* p_src = (unsigned char*)&_E_TEXT;
	unsigned char* p_dst = (unsigned char*)&_S_DATA;
	for(i;i<DATA_SIZE;i++)
	{
		*((unsigned char*)p_dst++)=*((unsigned char*)p_src++);
	}
	//init the .bss section with zero
	unsigned int BSS_SIZE=(unsigned char*)&_E_BSS - (unsigned char*)&_S_BSS ;
	p_dst = (unsigned char*)&_S_BSS;
	for(i;i<DATA_SIZE;i++)
	{
		*((unsigned char*)p_dst++)=(unsigned char)0;
	}
	//jump to main()
	main();
}