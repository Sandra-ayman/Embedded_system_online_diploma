/*
 * hw4.1.c
 *
 *  Created on: Sep 15, 2021
 *      Author: sandra
 */
//homework 4 example 1
#include<stdio.h>
int prime(int x)
{
	int i,y=0;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			y=1;
			break;
		}
	}
	return y;
}
int main()
{
	int x,y,i,z;
	printf("Enter two numbers(intervals): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("Prime numbers between %d and %d are:",x,y);
	for(i=x+1;i<y;i++)
	{
		z=prime(i);
		if(z==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}


