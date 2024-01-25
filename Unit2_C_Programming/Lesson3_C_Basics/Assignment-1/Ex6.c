/*
 * Ex5.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: C Program to swap two numbers.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	float a, b, temp;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &b);
	temp = a;
	a = b;
	b = temp;
	printf("------------------------\n");
	printf("After swapping, value of a = %f\n", a);
	printf("After swapping, value of b = %f\n", b);
	return 0;
}
