/*
 * hw3.3.c
 *
 *  Created on: Sep 5, 2021
 *      Author: sandra
 */
// homework 3 example 3 array
#include<stdio.h>
int main()
{
	int a[20][20],i=0,j=0,x=0,y=0;
	printf("Enter rows and column of matrix : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("Enter elements of matrix : \n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("\n Enter elements a%d%d : ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}
	int b[y][x];
	printf("Entered matrix : \n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			b[j][i]=a[i][j];
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matrix : \n");
	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d \t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

