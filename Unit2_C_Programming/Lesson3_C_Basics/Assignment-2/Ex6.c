/*
 *  Ex6.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: C Program to calculate sum of natural numbers.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	/*
	 * Note that there are better solutions such as using
	 * the summation equation, but this program
	 * is designed to be a practice on for loop.
	 */
	int i, a;
	long long sum;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &a);
	for(i = 1, sum = 0; i <= a; i++)
	{
		sum += i;
	}
	printf("Sum = %lld", sum);
	return 0;
}
