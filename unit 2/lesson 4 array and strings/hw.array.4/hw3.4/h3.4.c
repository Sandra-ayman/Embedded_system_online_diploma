/*
 * h3.4.c
 *
 *  Created on: Sep 6, 2021
 *      Author: sandra
 */
//homework 3 example 4 array
#include<stdio.h>
int main()
{
	int n,a[10],i=0,x,y;
	printf("Enter the no of elements :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the element to be inserted :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	printf("\n Enter the location : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&y);
	for(i=n;i>=y;i--)
	{
		a[i]=a[i-1];
	}
	n++;
	a[y-1]=x;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

