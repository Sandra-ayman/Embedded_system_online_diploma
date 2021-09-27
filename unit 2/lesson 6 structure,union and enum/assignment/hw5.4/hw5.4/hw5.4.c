/*
 * hw5.4.c
 *
 *  Created on: Sep 27, 2021
 *      Author: 20109
 */
#include<stdio.h>
struct Sstudent
{
	char Mname[50];
	int Mroll;
	float Mmarks;
};
int main()
{
	struct Sstudent a[10];
	int i;
	printf("Enter information of students :\n");
	for(i=0;i<10;i++)
	{
		a[i].Mroll=i+1;
		printf("For roll number %d\n",a[i].Mroll);
		printf("Enter name : ");
		fflush(stdin);
		fflush(stdout);
		scanf("%s",a[i].Mname);
		printf("Enter marks : ");
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&a[i].Mmarks);
	}
	printf("Displaying information of students :\n");
	for(i=0;i<10;i++)
	{
		printf("Information for roll number %d : \n",a[i].Mroll);
		printf("Name : %s\n",a[i].Mname);
		printf("Marks : %0.1f\n",a[i].Mmarks);
	}
	return 0;
}
