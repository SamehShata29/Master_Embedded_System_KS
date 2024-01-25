/*
 * Ex4.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: C Program to Multiply two Floating Point Numbers.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	float a, b;
	printf("Enter two numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f", &a, &b);
	printf("Product: %f", a*b);
	return 0;
}
