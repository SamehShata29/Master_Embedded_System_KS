/*
 *  Ex3.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: C Program to find the largest number among three numbers.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int a, b, c;
	printf("Enter three values: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d %d", &a, &b, &c);
	if(a > b && a > c)
	{
		printf("%d is the largest number.", a);
	}
	else if(b > a && b > c)
	{
		printf("%d is the largest number.", b);
	}
	else
	{
		printf("%d is the largest number.", c);
	}
	return 0;
}
