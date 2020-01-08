/*
Name: Brian George
Date: 08 Jan 20
Project: Basic Input/Output Performance Two

Objective: 
    Input a single character
    Print the previous sequential character
    Use getc() and putc()
*/

#include <stdio.h>

int main(void)
{
    // Variable to store the user's input
	int userInput = 0;

    // Informs the user of the request for information
    printf("\nEnter a character: ");

    // Retrieves the user's input and stores it
    userInput = getc(stdin);

    // Sets the input to the next character
    userInput = userInput - 1;
    
    // Informs the user on what was entered and what the data is now
    printf("Your character was: ");
    putc(userInput + 1, stdout);
    printf("\nYour character is now: ");
    putc(userInput, stdout);
    printf("\n\n");
	
    // Ends main function & terminates program
	return 0;
}