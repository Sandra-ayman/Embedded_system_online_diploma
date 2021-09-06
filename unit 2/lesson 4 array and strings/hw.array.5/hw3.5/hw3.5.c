/*
 * hw3.5.c
 *
 *  Created on: Sep 5, 2021
 *      Author: sandra
 */
//homework 3 example 5 array
#include<stdio.h>
int main()
{
	int n,a[10],x,y=0,i=0;
	printf("Enter no of elements : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the elements to be searched : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(x==a[i])
		{
			y=i;
			break;
		}
	}
	printf("Number found at the location = %d",y+1);
	return 0;
}

