/*
Name: Brian George
Date: 08 Jan 20
Project: Scanf Performance One

Objective: 
    Read a first, middle and last name as input into separate char arrays
    Specify a field-width to protect against buffer overflow
    Ensure the field-width leaves room for a nul-terminator
    Specify a ("\t") as a delimitating character
    Print the full name, separating each string with a tab and newline ("\t\n")
*/

#include <stdio.h>

int main(void)
{
    // Creates the variables to hold the first, middle and last name of someone with a max of 19 chars saved each
    char first_name[20] = {0};
    char middle_name[20] = {0};
    char last_name[20] = {0};

    // Gets the input from the user and saves it
    printf("Enter your first, middle and last name: ");
    scanf("%s\t%s\t%s", &first_name, &middle_name, &last_name);

    // Displays the saved data
    printf("Your name is: \t\n%s\t\n%s\t\n%s", first_name, middle_name, last_name);
	
    // Ends main function & terminates program
	return 0;
}