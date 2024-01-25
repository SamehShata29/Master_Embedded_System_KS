/*
 *  Ex1.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: C Program to check whether a number is even or odd.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int a;
	printf("Enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &a);
	if(a % 2)
	{
		printf("%d is odd\n", a);
	}
	else
	{
		printf("%d is even\n", a);
	}
	return 0;
}
