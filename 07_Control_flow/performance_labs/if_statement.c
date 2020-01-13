/*
Name: Brian George
Date: 13 Jan 20
Project: If Statement

Objective: 
    Initialize a char array to zero.
    Safely store a user-input string in the char array.
    Safely print the string IF the following conditions are both true: 
    The first element greater than or equal to decimal value 32.
    The first element is less than decimal value 126.
    NOTE: decimal values 32-126 represent printable ASCII characters
*/

#include <stdio.h>

int main(void)
{
    // Declares and initializes a char array for input
    char numbers[32] = {0};

    // Takes user input
    printf("Enter a string: ");
    fscanf(stdin, "%31s", &numbers);

    // Displays the user's input only if the first character is an ASCII char between 32 and 126
    if (numbers[0] >= 32 && numbers[0] < 126)
    {
        printf("Your input was: %s", numbers);
    }
	
    // Ends main function & terminates program
	return 0;
}