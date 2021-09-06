/*
 * hw3.2.c
 *
 *  Created on: Sep 5, 2021
 *      Author: sandra
 */
#include<stdio.h>
int main()
{
	float a[10],sum=0,average=0;
	int i=0,n;
	printf("Enter the numbers of data :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n %d. Enter number : ",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	average=sum/n;
	printf("Average = %0.2f \n",average);
	return 0;
}



