/*
 * hw3.8.c
 *
 *  Created on: Sep 6, 2021
 *      Author: sandra
 */
//homework 3 example 3 string
#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int i;
	printf("Enter the string : ");
	fflush(stdin);
	fflush(stdout);
	gets(a);
	printf("Reverse string is :");
	for(i=strlen(a);i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;

}

