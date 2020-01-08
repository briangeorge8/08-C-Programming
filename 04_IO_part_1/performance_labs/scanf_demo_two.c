/*
Name: Brian George
Date: 08 Jan 20
Project: Scanf Demo Two

Objective: 
    Read three ints, representing the date, from one line
    Format the input so the integers are separated by a dash (-) as <mm>-<dd>-<yyyy>
    Output the results as a date with leading zeros <mm>/<dd>/<yyyy>
    Specify the field width of the output appropriately
*/

#include <stdio.h>

int main(void)
{
    // Creates the variables to hold three numbers
    int num_one, num_two, num_three;

    // Gets the input from the user and saves it
    printf("\nEnter the Month-Day-Year as integers: ");
    scanf("%2d-%2d-%4d", &num_one, &num_two, &num_three);

    // Displays the saved data
    printf("The saved date is: %02d/%02d/%04d\n", num_one, num_two, num_three);
    
    // Ends main function & terminates program
	return 0;
}