/*
 * hw6.5.c
 *
 *  Created on: Oct 8, 2021
 *      Author: 20109
 */
#include<stdio.h>
struct Semploee
{
	char Sname[50];
	int Sid;
};
int main()
{
	struct Semploee emploee={"Alex",1002};
	struct Semploee *p;
	p=&emploee;
	printf("Emploee Name : %s\n",p->Sname);
	printf("Emploee ID : %d\n",p->Sid);
	return 0;
}

