/*
 * hw3.7.c
 *
 *  Created on: Sep 6, 2021
 *      Author: sandra
 */
//homework 3 example 2 string
#include<stdio.h>
int main()
{
	char a[50];
	int i=0;
	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(a);
	while(a[i]!=0)
	{
		i++;
	}
	printf("Length of string : %d ",i);
	return 0;
}

