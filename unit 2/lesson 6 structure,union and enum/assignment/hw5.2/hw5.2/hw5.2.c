/*
 * hw5.2.c
 *
 *  Created on: Sep 27, 2021
 *      Author: 20109
 */
#include<stdio.h>
struct SAddDistance
{
	int Mfeet;
	float Minches;
};
int main()
{
	struct SAddDistance d1,d2,sum;
	printf("Enter information for 1st distance\n");
	printf("Enter feet : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&d1.Mfeet);
	printf("Enter inches : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&d1.Minches);
	printf("Enter information for 2nd distance\n");
	printf("Enter feet : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&d2.Mfeet);
	printf("Enter inches : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&d2.Minches);
	sum.Mfeet=d1.Mfeet+d2.Mfeet;
	sum.Minches=d1.Minches+d2.Minches;
	if(sum.Minches>=12)
	{
		sum.Minches=sum.Minches-12.0;
		++sum.Mfeet;
	}
	printf("Sum of distances=%d'-%0.2f\"\n",sum.Mfeet,sum.Minches);
	return 0;
}
