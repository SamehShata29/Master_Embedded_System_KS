/*
 * Lab4.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: Calculate the summation of numbers
 *               between 1 and 99 using for loop.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, sum ;
	for(i = 1, sum = 0; i <= 99; i++)
	{
		sum += i;
	}
	printf("The summation between 1 and 99 = %d", sum);
	return 0;
}
