/*
 * Lab3.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: Calculate the minimum of two numbers.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	printf("Enter two numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d", &a, &b);
	printf("The minimum number is: %d",(a < b)? a : b);
	return 0;
}

