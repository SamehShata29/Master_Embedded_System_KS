/*
 * Ex2.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: C Program to Print a Integer Entered by a User.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int i;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &i);
	printf("You Entered: %d", i);
	return 0;
}
