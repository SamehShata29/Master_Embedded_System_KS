/*
 * Ex3.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: C Program to Add Two Integers.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int a, b;
	printf("Enter two integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d", &a, &b);
	printf("sum: %d", a+b);
	return 0;
}
