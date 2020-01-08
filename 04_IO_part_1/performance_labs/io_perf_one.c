/*
Name: Brian George
Date: 08 Jan 20
Project: Basic Input/Output Performance One

Objective: 
    Input a single character
    Print the next sequential character
    Use getchar() and putchar()
*/

#include <stdio.h>

int main(void)
{
    // Variable to store the user's input
	int userInput = 0;

    // Informs the user of the request for information
    printf("\nEnter a character: ");

    // Retrieves the user's input and stores it
    userInput = getchar();

    // Sets the input to the next character
    userInput = userInput + 1;
    
    // Informs the user on what was entered and what the data is now
    printf("Your character was: ");
    putchar(userInput - 1);
    printf("\nYour character is now: ");
    putchar(userInput);
    printf("\n\n");
	
    // Ends main function & terminates program
	return 0;
}