/*
Name: Brian George
Date: 08 Jan 20
Project: Scanf Demo One

Objective: 
    Read a string into a char array
    Specify a field-width to protect against buffer overflow
    Ensure the field-width leaves room for the nul-terminator
    Stop reading at the first capital letter or new line
*/

#include <stdio.h>

int main(void)
{
    // Container to hold the user's input
    char string[8] = {0};

    // Gets the input from the user and saves it
    printf("Enter your string up to 7 characters: ");
    scanf("%7[^A-Z\n]", &string);

    // Displays the result to the user
    printf("Your saved input is: %s", string);

    // Ends main function & terminates program
	return 0;
}