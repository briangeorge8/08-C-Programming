/*
Name: Brian George
Date: 07 Jan 20
Project: Favorite Quote

Objective: Favorite quote
    Declare and initialize a char array with your favorite saying
    Ensure the last index is set to nul ('\0')
    Separate each word in the array with a new line character ('\n' or decimal value 10)
*/

#include <stdio.h>

int main()
{
    // Creates a char array to hold the favorite quote
    char quote [] = {'H', 'e', 'l', 'l', 'o', '\n', 't', 'h', 'e', 'r', 'e', '\0'};

    // Prints the quote
    printf(quote);
    
    // Ends main function & terminates program
    return 0;
}