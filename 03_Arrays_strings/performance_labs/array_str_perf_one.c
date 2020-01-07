/*
Name: Brian George
Date: 07 Jan 20
Project: String Arrays

Objective: 
    Declare and zeroize a char array with a dimension of 256
    Assign your chosen phrase to the leading elements of that array
    Explicitly verify your string is nul-terminated
    Print your string
    QUIZ: What is your string length?
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // The zeroized char array to contain a phrase
    char string [256] = {0};

    // Assigning the phrase to the array
    string[0] = 'H';
    string[1] = 'e';
    string[2] = 'y';

    // Explicitly verifying the string is null-terminated
    string[3] = '\0';

    // Added requirement, add additional characters
    string[4] = '!';

    // Prints the array for view
    printf(string);

    // Gets the char array length without counting null-terminators
    int length = strlen(string);

    // Displays the char array's length
    printf("\nThe string is %d characters long.", length);

    // Ends main function & terminates program
    return 0;
}