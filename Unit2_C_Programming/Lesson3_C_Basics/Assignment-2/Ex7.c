/*
 *  Ex7.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: C Program to find a factorial of a number.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int a;
	long long fact = 1;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &a);
	if(a < 0)
	{
		printf("Error!!! Factorial of a negative number doesn't exist.");
	}
	else
	{
		for(; a > 0; a--)
		{
			fact *= a;
		}
		printf("Factorial = %lld", fact);
	}
	return 0;
}
