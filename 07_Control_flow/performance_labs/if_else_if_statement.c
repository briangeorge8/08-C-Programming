/*
Name: Brian George
Date: 13 Jan 20
Project: If/Else If Statement

Objective: 
    Initialize ONLY three unsigned int variables to 0.
    Safely scan user input into the variable #1 and #2 utilizing a single line.
    Using a single ELSE-IF statement: 
    If variable #1 is equal to variable #2, print an ERROR.
    Otherwise, exchange the value of the largest variable with variable #3 while preserving the other value.
    Print the values of all three variables if the SUM of the three variables is greater than 2 regardless of the previous ELSE-IF statement.
*/

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    // Declares and initializes three unsigned integers
    uint32_t one = 0, two = 0, three = 0;

    // Takes user input for three unsigned integers
    printf("Enter two different numbers with a dash between: ");
    scanf("%d %d", &one, &two);

    if (one == two) // If variable #1 is equal to variable #2, print an ERROR.
    {
        printf("Error: The two numbers are equal.");
    }
    else if (one > two) // Otherwise, exchange the value of the largest variable with variable #3 while preserving the other value.
    {
        three = one;
        one = 0;
    }
    else
    {
        three = two;
        one = 0;
    }
    
    if (one + two + three > 2) // Print the values of all three variables if the SUM of the three variables is greater than 2
    {
        printf("One: %d  Two: %d  Three: %d", one, two, three);
    }

    // Ends main function & terminates program
	return 0;
}