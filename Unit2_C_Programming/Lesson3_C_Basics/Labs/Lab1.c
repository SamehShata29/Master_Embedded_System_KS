/*
 * Lab1.c
 *
 *  Created on : Jan 25, 2024
 *  Author     : Sameh
 *  Description: Calculate circle area or circumference
 *               according to user input, The user is asked
 *               to enter the radius of the circle and choose
 *               which output he needs.
 */


#include <stdio.h>
#include <stdlib.h>

int main(){
	char choice;
	float radius, area, circumference;
	printf("Enter the circle radius: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&radius);
	printf("Enter your choice \"(a) for area or (c) for circumference\": ");
	fflush(stdin);fflush(stdout);
	scanf(" %c",&choice);
	if(choice == 'a')
	{
		area = 3.14159 * radius * radius;
		printf("Area = %f", area);
	}
	else if(choice == 'c')
	{
		circumference = 2 * 3.14159 * radius;
		printf("Area = %f", circumference);
	}
	else
	{
		printf("Invalid choice.");
	}
	return 0;
}
