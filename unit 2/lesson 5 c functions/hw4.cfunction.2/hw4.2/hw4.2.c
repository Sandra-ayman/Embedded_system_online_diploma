/*
 * hw4.2.c
 *
 *  Created on: Sep 15, 2021
 *      Author: sandra
 */
//homework 4 example 2
#include<stdio.h>
int fac(int x)
{
	if(x>0)
	{
		if(x==1)
		{
			return 1;
		}
		return x*fac(x-1);
	}
}
int main()
{
	int x;
	printf("Enter a positive integer : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	printf("Factorial of %d = %d",x,fac(x));
}

