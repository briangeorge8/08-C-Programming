/*
Name: Brian George
Date: 13 Jan 20
Project: Switch/Case Statement

Objective: 
    Write a program that will evaluate a simple math formula.
    Input the formula with two integers separated by an arithmetic operator from one line. 
    Example: 1 + 1, (-8) - 3, 2 * (-7), (-15) / (-4)
    Use a switch statement to print the correct value using the operators as cases.
    Set the default condition to an error.
    Ensure any division provides a double answer with a precision of two decimal places.
    NOTE: Scan the arithmetic operator as a char
*/

#include <stdio.h>

int main(void)
{
    // Declares and initializes the variables needed to conduct basic math
    int first, second;
    char operator;

    // Receives input from the user
    printf("\nEnter a basic math problem (Example: 1+1): ");
    fscanf(stdin, "%d%c%d", &first, &operator, &second);

    // Switch case based on the math to be conducted
    switch (operator)
    {
        case '+': // Conducts addition and prints the formula and output
            printf("\n%d + %d = %d\n\n", first, second, first + second);
            break;

        case '-': // Conducts subtraction and prints the formula and output
            printf("\n%d - %d = %d\n\n", first, second, first - second);
            break;

        case '*': // Conducts multiplication and prints the formula and output
            printf("\n%d * %d = %d\n\n", first, second, first * second);
            break;

        case '/': // Conducts division and prints the formula and output
            printf("\n%d / %d = %.2lf\n\n", first, second, (first * 1.0) / second);
            break;
        
        default: // Informs the user that they goofed up
            printf("\nUser entered an invalid operator.\n\n");
            break;
    }

    // Ends main function & terminates program
	return 0;
}