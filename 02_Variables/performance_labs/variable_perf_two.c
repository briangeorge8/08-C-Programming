/*
Name: Brian George
Date: 07 Jan 20
Project: Performance Lab 2 (Variables)

Objective: Declare and initialize variables of data types: int, float, double, char
Type cast and print the following: int -> float, int -> char
    float -> double, double -> float, char -> int, 33 -> char
Note: Initialize int to a value between 32 and 126
*/

#include <stdio.h>

int main(void)
{
	// Declares and initializes the required variable types
	int integer = 73;
	float money = 12.34;
	double result = 1.123456789012345;
	char singleChar = 'B';
	
	// Displays the saved content
	printf("\n\nThe integer's value is %d \n", integer);
	printf("The float's value is %.2f \n", money);
	printf("The double's value is %.15f \n", result);
	printf("The char's value is %c \n\n", singleChar);

	// Casts the required data types
    printf("The integer's value as a float is %f \n", (float) integer);
    printf("The integer's value as a char is %c \n", (char) integer);
	printf("The float's value as a double is %.2f \n", (double) money);
	printf("The double's value as a float is %.15f \n", (float) result);
	printf("The char's value as an int is %d \n", (int) singleChar);
	printf("The int '33' as a char is %c \n", (char) 33);
	
    // Ends main function & terminates program
	return 0;
}