/*
 * hw6.3.c
 *
 *  Created on: Oct 8, 2021
 *      Author: 20109
 */
#include<stdio.h>
#include<string.h>
int main()
{
	int i=-1;
	char str[50],restr[50];
	char *strp=str;
	char *restrp=restr;
	printf("Input a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(str);
	while(*strp)
	{
		strp++;
		i++;
	}
	printf("Reverse of the string is : ");
	while(i>=0)
	{
		strp--;
		*restrp=*strp;
		restrp++;
		i--;
	}
	*restrp='\0';
	printf("%s",restr);
	return 0;
}

