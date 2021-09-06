/*
 * hw3.6.c
 *
 *  Created on: Sep 6, 2021
 *      Author: sandra
 */
// homework 3 example 1 string
#include<stdio.h>
int main()
{
	char a[50],x;
	int i=0,n=0;
	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(a);
	printf("\n Enter a character to find frequency : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);
	while(a[i]!=0)
	{
		if(x==a[i])
		{
			n++;
		}
		i++;
	}
	printf("Frequency of %c = %d",x,n);
	return 0;
}

