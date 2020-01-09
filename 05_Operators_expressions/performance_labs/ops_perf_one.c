/*
Name: Brian George
Date: 09 Jan 20
Project: Operators and Expression Performance One

Objective: Arithmetic
    Write a program to calculate the hypotenuse of a right triangle
    Use the Pythagorean Theorem (a^2 + b^2 = c^2)
    Input the two legs (A and B)
    Output the hypotenuse (C)
    Add this to your code "shell" 
    #include <math.h> // Math header contains sqrt()
        NOTE: gcc may require a -lm flag. This tells gcc to link a library (-l), specifically the math library (-m).
    double sqrt(double x);
        Returns the nonnegative square root of x as double
        Returns NaN (Not a number) on most errors
    Relational
        Write a relational expression to appropriately test the user input for leg A and then for leg B
    Logical
        Combine the previous Relational expressions with a logical operator so that both must be True
    Error Checking
        Include the Arithmetic, Relational and Logical code in this shell code as indicated by insert here
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main(void) 
{
    /* insert initialize variables here */
    double a, b, c;

    /* insert input values and assign to variables here */
    printf("Enter the length for side 1: ");
    scanf("%lf", &a);
    printf("Enter the length for side 2: ");
    scanf("%lf", &b);

    /*insert logical combo of relational expressions here */
    if (a > 0 && b > 0)
    {
        /* insert arithmetic hypotenuse calculation here */
        c = sqrt(a*a + b*b);

        /* insert -Print the hypotenuse here */
        printf("The right-triangle's sides are %.5f, %.5f, and %.5f", a, b, c);
    }
    return 0;
}