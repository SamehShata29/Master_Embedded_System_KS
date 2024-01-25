/*
 *  Ex5.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: C Program to check whether a character is an alphabet or not.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	char a;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf(" %c", &a);
	if(a >= 'A' && a <= 'z')
	{
		printf("%c is an alphabet.", a);
	}
	else
	{
		printf("%c in not an alphabet.", a);
	}
	return 0;
}
