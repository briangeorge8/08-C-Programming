/*
Name: Brian George
Date: 08 Jan 20
Project: String Input/Output Performance One

Objective: 
    Read a string from stdin into a char array of dimension 10
    Write that string to stdout
    Use fgets() and fputs()
*/

#include <stdio.h>

int main(void)
{
    // String buffer container
    char buff[10];

    // Prompts user for input string
    printf("Enter string: ");
    
    // Stores the user's input string
    fgets(buff, sizeof(buff), stdin);
    
    // Informs the user of the impending release of their data
    printf("Your string was: ");
    
    // Prints out the user's past input
    fputs(buff, stdout);
	
    // Ends main function & terminates program
	return 0;
}