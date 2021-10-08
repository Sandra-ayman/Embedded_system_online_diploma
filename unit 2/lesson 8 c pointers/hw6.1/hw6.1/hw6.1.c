/*
 * hw6.1.c
 *
 *  Created on: Oct 8, 2021
 *      Author: 20109
 */
#include<stdio.h>
int main()
{
	int m=29;
	printf("Address of m : %x\n",(unsigned int)&m);
	printf("Value of m : %d\n",m);
	printf("\n");
	printf("Now ab is assigned with the address of m.\n");
	int *ab=&m;
	printf("Address of pointer ab : %x\n",(unsigned int)ab);
	printf("content of pointer ab : %d\n",*ab);
	printf("\n");
	printf("The value of m assigned to 34 now\n");
	m=34;
	printf("Address of pointer ab : %x\n",(unsigned int)ab);
	printf("content of pointer ab : %d\n",*ab);
	printf("\n");
	printf("The variable ab is assigned with the value 7 now\n");
	*ab=7;
	printf("Address of m : %x\n",(unsigned int)&m);
	printf("Value of m : %d\n",m);
	return 0;
}

