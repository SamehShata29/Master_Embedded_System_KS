/*
 *  Ex4.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: C Program to check whether a number is positive or negative.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int a;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &a);
	if(a > 0)
	{
		printf("%d is positive.", a);
	}
	else if(a < 0)
	{
		printf("%d is negative.", a);
	}
	else
	{
		printf("You entered Zero.");
	}
	return 0;
}
