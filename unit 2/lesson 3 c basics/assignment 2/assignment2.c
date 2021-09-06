/*
 * assignment2.c
 *
 *  Created on: Jul 21, 2021
 *      Author: sandra
 */
#include<stdio.h>
int main()
{
//	//example 1
//	printf("c programming \n");
//	//example 2
//	int a;
//	printf("Enter an integer : ");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%d",&a);
//	printf("you entered : %d",a);
//	//example 3
//	int a,b,sum=0;
//	printf("Enter two integers : ");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%d %d",&a,&b);
//	sum=a+b;
//	printf("sum : %d\n",sum);
//	//example 4
//	float a,b,product;
//	printf("Enter two numbers :");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%f %f",&a,&b);
//	product=a*b;
//	printf("product : %f\n",product);
//	//example 5
//	char a;
//	printf("enter a character :");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%c",&a);
//	printf("ASCII value for %c = %d ",a,(int)a);
//	//example 6
//	float a,b,temp;
//	printf("Enter value of a :");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%f",&a);
//	printf("Enter value of b :");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%f",&b);
//	temp=a;
//	a=b;
//	b=temp;
//	printf("After swapping, value of a = %f\n",a);
//	printf("After swapping, value of b = %f\n",b);
//	example 7
//	float a,b;
//	printf("Enter value of a :");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%f",&a);
//	printf("Enter value of b :");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%f",&b);
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf("After swapping, value of a = %f\n",a);
//	printf("After swapping, value of b = %f\n",b);
//	//homework2 example 1
//	int number;
//	printf("Enter an integer you want to check :");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%d",&number);
//	if(number %2 ==0)
//	{
//		printf("%d is even",number);
//	}
//	else
//	{
//		printf("%d is odd",number);
//	}
//	return 0;
//	//home work 2 example 2
//	char c;
//	printf("Enter an alphabet : ");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%c",&c);
//	if(c=='a'||c=='A'||c=='i'||c=='I'||c=='o'||c=='O'||c=='e'||c=='E'||c=='u'||c=='U')
//	{
//		printf("%c is a vowel",c);
//	}
//	else
//	{
//		printf("%c is a consonant",c);
//	}
//	//home work 2 example 3
//	float number1,number2,number3;
//	printf("Enter three numbers :");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%f %f %f",&number1,&number2,&number3);
//	if(number1>number2 && number1>number3)
//	{
//		printf("Largest number = %f",number1);
//	}
//	else if(number2>number3)
//	{
//		printf("Largest number = %f",number2);
//	}
//	else
//	{
//		printf("Largest number = %f",number3);
//	}
//	//home work 2 example 4
//	float number;
//	printf("Enter a number :");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%f",&number);
//	if(number>0)
//	{
//		printf("%f is positive",number);
//	}
//	else if(number<0)
//	{
//		printf("%f is negative",number);
//	}
//	else
//	{
//		printf("You entered zero");
//	}
//	//homework 2 example 5
//	char c;
//	printf("Enter a character : ");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%c",&c);
//	if(c>='a'&& c<='z'|| c>='A'&& c<='Z')
//	{
//		printf("%c is an alphabet",c);
//	}
//	else
//	{
//		printf("%c is not an alphabet",c);
//	}
//	//homework 2 example 6
//	int number,sum=0;
//	printf("Enter an integer : ");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%d",&number);
//	for(int i=1;i<=number;i++)
//	{
//		sum+=i;
//	}
//	printf("sum = %d",sum);
//	//homework 2 example 7
//	int number,factorial=1;
//	printf("Enter an integer :");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%d",&number);
//	if(number<0)
//	{
//		printf("Erorr!!! factorial of negative number doesn't exist ");
//	}
//	else if (number==0)
//	{
//		printf("factorial = %d",factorial);
//	}
//	else
//	{
//		for(int i=1;i<=number;i++)
//		{
//			factorial*=i;
//		}
//		printf("Factorial = %d",factorial);
//	}
//	//homework 2 example 8
	float operand1,operand2,result;
	char operation;
	printf("Enter operator either + or - or * or divide :-");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&operation);
	printf("Enter two operands :-");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&operand1,&operand2);
	switch(operation)
	{
	case '+':
		result=operand1+operand2;
		break;
	case '-':
		result=operand1-operand2;
		break;
	case '*':
		result=operand1*operand2;
		break;
	case '/':
		result=operand1/operand2;
		break;
	}
	printf("%f %c %f = %f",operand1,operation,operand2,result);

	return 0;

}

