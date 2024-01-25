/*
 *  Ex8.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: C Program to make a simple calculator to add, subtract,
 *               multiply or divide using switch case.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	char operator;
	float a,b;
	printf("Enter operator either + or - or * or /: ");
	fflush(stdin);fflush(stdout);
	scanf(" %c", &operator);
	printf("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f", &a, &b);
	switch(operator)
	{
	case '+':
		printf("%f + %f = %f", a, b, a+b);
		break;
	case '-':
		printf("%f - %f = %f", a, b, a-b);
		break;
	case '*':
		printf("%f * %f = %f", a, b, a*b);
		break;
	case '/':
		printf("%f / %f = %f", a, b, a/b);
		break;
	default:
		printf("Invalid operator.");
	}
	return 0;
}
