/*
Name: Brian George
Date: 13 Jan 20
Project: If/Else Statement

Objective: 
    Initialize a signed int to 0.
    Input a number from the user and store it in the signed int.
    Determine if the number is negative or positive utilizing a bitwise operator.
    Utilizing an IF-ELSE statement: 
    INDICATE if the number is negative
    Otherwise, print the original value in binary, and use a bitwise operation to flip one bit to make it negative
    Print the binary
*/

#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main(void)
{
    // Declares and initializes an input int
    int num = 0;

    // Takes an integer as user input
    printf("\n\nEnter a number: ");
    fscanf(stdin, "%15d", &num);
	
    // When the lead binary is '1', the number is negative
    int isNeg = ((num & 0x80000000) != 0);

    // If negative, the program is done, just tell the user, otherwise, do some binary work
    if (isNeg)
    {
        printf("The number is negative.");
    }
    else
    {
        // Prints the binary representation of the original number w/o leading zeros
        printf("The original number '%d' is the following in binary: \n", num);
        for (uint32_t bitChecker = 1 << (int)log2(num); bitChecker; bitChecker = bitChecker >> 1)
        {
            // Compares bitchecker and userinput, if both 1, then print 1 else print 0
            fprintf(stdout, bitChecker & num ? "1": "0");
        }

        // Flip the number to negative and add 1 to get it to the correct number (2's complement)
        num = ~num + 1;

        // Correct answer: num |= 0x80000000;
        
        // Prints the binary representation of the flipped number
        printf("\n\nThe flipped number '%d' is the following in binary: \n", num);
        for (uint32_t bitChecker = 1 << 31; bitChecker; bitChecker = bitChecker >> 1)
        {
            // Compares bitchecker and userinput, if both 1, then print 1 else print 0
            fprintf(stdout, bitChecker & num ? "1": "0");
        }

        // Spacer
        printf("\n\n");
    }

    // Ends main function & terminates program
	return 0;
}