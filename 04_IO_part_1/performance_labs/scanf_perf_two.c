/*
Name: Brian George
Date: 08 Jan 20
Project: Scanf Performance Two

Objective: 
    Read two integers from one line
    Format the input so that the integers are separated by an asterisk (*) x*y (e.g., 2*3, 11*14)
    Reprint the two integers and result as if the answer were being read by a human
*/

#include <stdio.h>

int main(void)
{
    int num_one, num_two, result;

    printf("Enter two numbers seperated by an astrisk: ");
    scanf("%d*%d", &num_one, &num_two);

    result = num_one * num_two;

    printf("%d * %d = %d", num_one, num_two, result);
	
    // Ends main function & terminates program
	return 0;
}