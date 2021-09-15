/*
 * hw4.3.c
 *
 *  Created on: Sep 15, 2021
 *      Author: sandra
 */
//homework 4 example 3
#include <stdio.h>
void reverseSentence()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reverseSentence();
        printf("%c", c);
    }
}

int main()
{
    printf("Enter a sentence: ");
    fflush(stdin);
    fflush(stdout);
    reverseSentence();
    return 0;
}


