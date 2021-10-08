/*
 * hw6.4.c
 *
 *  Created on: Oct 8, 2021
 *      Author: 20109
 */
#include<stdio.h>
int main()
{
	int i,n;
	int arr[15];
	int *arrp;
	arrp=&arr[0];
	printf("Input the number of elements to store in the array(max 15) :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	printf("Input %d number of element in the array : \n",n);
	for(i=0;i<n;i++)
	{
		printf("element-%d : ",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%d",arrp);
		arrp++;
	}
	arrp=&arr[n-1];
	printf("The elements of array in reverse order are : \n");
	for(i=n;i>0;i--)
	{
		printf("elemnt - %d : %d\n",i,*arrp);
		arrp--;
	}
	return 0;
}

