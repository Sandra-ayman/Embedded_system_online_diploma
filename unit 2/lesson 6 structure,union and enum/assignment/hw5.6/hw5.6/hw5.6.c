/*
 * hw5.6.c
 *
 *  Created on: Sep 27, 2021
 *      Author: 20109
 */
#include<stdio.h>
union UNUMsize
{
	char Ma[32];
	int Mb;
	float Mc;
};
struct Ssize
{
	char Md[32];
	int Mf;
	float Me;
};
int main()
{
	union UNUMsize u;
	struct Ssize s;
	printf("Size of union = %d\n",sizeof(u));
	printf("Size of struct = %d\n",sizeof(s));
	return 0;
}
