/*
Name: Brian George
Date: 06 Jan 20
Project: Day Converter

Objective: Write a program to convert a number of days into years (365 days in a year), and weeks.

example: if the user enters 1, 000 days, it should display "2 years, 38 weeks, 4 days".
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    // Creates required variables to translate a number of days to the number of years/weeks/days
    int days, weeks, years;
    int days_in_year = 365;
    int days_in_week = 7;

    // Takes in input from user for the number of days to convert
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Gets the number of years
    years = days / days_in_year;

    // Gets the remainder of days to transition to weeks
    days = days - (years * days_in_year);

    // Gets the number of weeks
    weeks = days / days_in_week;

    // Gets the remainder of days remaining
    days = days - (weeks * days_in_week);

    // Displays the results
    printf("%d years, %d weeks, %d days\n", years, weeks, days);

    return 0;
}