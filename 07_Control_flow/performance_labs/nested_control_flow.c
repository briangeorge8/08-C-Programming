/*
Name: Brian George
Date: 13 Jan 20
Project: Nested Control Flow

Objective: 
    Print all the even or odd numbers from 0 to 100.
    Prompt the user for input to indicate odds or evens.
    Loop from 0 to 100 and print all indicated numbers.
    Use and IF statement to check if even or odd.
    BONUS: Ask the user to continue with a DO-WHILE loop
    * write a version with the counting loop written as a FOR loop, and a WHILE loop version.
*/

#include <stdio.h>

int main(void)
{
    char keepGoing = 'n';

    do
    {
        for (int i = 0; i <= 100; i++)
        {
            printf("\nThe number currently is: %d", i);

            if (i % 2 == 0)
            {
                printf("\nThe number %d is even.\n", i);
            }
            else
            {
                printf("\nThe number %d is odd.\n", i);
            }
            
        }

    printf("\nEnter 'y' to keep going: ");
    fscanf(stdin, "%c", &keepGoing);

    } while (keepGoing == 'y');

    // Ends main function & terminates program
	return 0;
}