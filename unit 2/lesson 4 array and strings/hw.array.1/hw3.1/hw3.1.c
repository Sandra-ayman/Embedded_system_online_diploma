/*
 * hw3.1.c
 *
 *  Created on: Sep 5, 2021
 *      Author: sandra
 */
//homework3.example1.array
#include<stdio.h>
int main()
{
	float a[2][2],b[2][2],sum[2][2];
	int i=0,j=0;
	printf("Enter the elements of 1st matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n Enter a%d%d : ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the elements of 2st matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n Enter b%d%d : ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}
	printf("Sum of matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%0.1f \t",sum[i][j]);
		}
		printf("\r\n");
	}
	return 0;
}

