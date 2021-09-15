/*
 * hw4.4.c
 *
 *  Created on: Sep 15, 2021
 *      Author: sandra
 */
//homework 4 example 4
#include<stdio.h>
int power(int x,int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return x*power(x,n-1);
	}
}
int main()
{
	int x,n;
	printf("Enter base number : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	printf("Enter power number (positive integer) : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	printf("%d^%d = %d",x,n,power(x,n));
	return 0;
}

