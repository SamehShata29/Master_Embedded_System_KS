/*
 *  Ex2.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: C Program to check vowel or consonant.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	char a;
	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf(" %c", &a);
	if(a == 'a' || a == 'e' || a == 'o' || a == 'i' || a == 'u'
	   || a == 'A' || a == 'E' || a == 'O' || a == 'I' || a == 'U')
	{
		printf("%c is a vowel.", a);
	}
	else
	{
		printf("%c is a consonant.", a);
	}
	return 0;
}
