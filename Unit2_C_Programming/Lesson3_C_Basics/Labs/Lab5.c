/*
 * Lab5.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: Calculate average of students' degrees.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int   i, noStudents;
	float degree, sum;
	printf("Enter the number of students: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&noStudents);
	for(i = 1, sum = 0; i <= noStudents; i++)
	{
		printf("Enter the degree of student (%d): ", i);
		fflush(stdin);fflush(stdout);
		scanf("%f",&degree);
		sum += degree;
	}
	printf("The average of degrees = %.2f", sum/noStudents);
	return 0;
}
