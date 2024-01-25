/*
 * Lab6.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: reversed pyramid by numbers.
 *  			 0 1 2 3 4 5 6 7 8 9
 *  			 1 2 3 4 5 6 7 8 9
 *  			 2 3 4 5 6 7 8 9
 *  			 3 4 5 6 7 8 9
 *  			 4 5 6 7 8 9
 *  			 5 6 7 8 9
 *  			 6 7 8 9
 *  			 7 8 9
 *  			 8 9
 *  			 9
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j;
	for(i = 0; i <= 9; i++)
	{
		for(j = i; j <= 9; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
