/*
 * Ex5.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: C Program to Find ASCII Value of a Character.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	char a;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf(" %c", &a);
	printf("ASCII value of %c = %d", a, a);
	return 0;
}
