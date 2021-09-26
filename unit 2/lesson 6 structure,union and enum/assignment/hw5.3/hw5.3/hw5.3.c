/*
 * hw5.3.c
 *
 *  Created on: Sep 27, 2021
 *      Author: 20109
 */
#include<stdio.h>
struct Scomplex
{
	double Mreal;
	double Mimaginary;
};
struct Scomplex Readcomplex(char number[])
{
	struct Scomplex c;
	printf("for %s complex number\n",number);
	printf("Enter real and imaginary respectively :");
	fflush(stdin);
	fflush(stdout);
	scanf("%lf %lf",&c.Mreal,&c.Mimaginary);
	return c;
}
struct Scomplex Addcomplex(struct Scomplex a,struct Scomplex b)
{
	struct Scomplex c;
	c.Mreal=a.Mreal+b.Mreal;
	c.Mimaginary=a.Mimaginary+b.Mimaginary;
	return c;
}
void printcomplex(struct Scomplex sum)
{
	printf("Sum=%0.1lf+%0.1lfi",sum.Mreal,sum.Mimaginary);
}
int main()
{
	struct Scomplex x,y,z;
	x=Readcomplex("1st");
	y=Readcomplex("2nd");
	z=Addcomplex(x,y);
	printcomplex(z);
	return 0;
}
