/*
 * hw5.5.c
 *
 *  Created on: Sep 30, 2021
 *      Author: 20109
 */
#include<stdio.h>
#define bi 3.14
#define area(a) bi*a*a
int main()
{
	float x;
	printf("Enter the radius: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	printf("Area=%0.2f\n",area(x));
	return 0;
}

