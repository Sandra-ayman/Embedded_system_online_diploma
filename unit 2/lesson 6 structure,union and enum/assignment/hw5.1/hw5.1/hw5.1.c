/*
 * hw5.1.c
 *
 *  Created on: Sep 26, 2021
 *      Author: 20109
 */
#include<stdio.h>
struct Sstudentinfo
{
	char Mname[50];
	int Mroll;
	float Mmarks;
};
void print_st_info(struct Sstudentinfo st)
{
	printf("Name : %s\nRoll : %d\n Marks : %0.2f\n",st.Mname,st.Mroll,st.Mmarks);
}
int main()
{
	struct Sstudentinfo st;
	printf("Enter information of students :\n");
	printf("Enter name : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%s",st.Mname);
	printf("Enter Roll number :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&st.Mroll);
	printf("Enter marks : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&st.Mmarks);
	printf("Displaying information : \n");
	print_st_info(st);
	return 0;
}
