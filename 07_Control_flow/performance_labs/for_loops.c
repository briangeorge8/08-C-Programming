/*
Name: Brian George
Date: 13 Jan 20
Project: Switch/Case Statement

Objective: 
    Write a program that will evaluate a simple math formula.
    Input the formula with two integers separated by an arithmetic operator from one line. 
    Example: 1 + 1, (-8) - 3, 2 * (-7), (-15) / (-4)
    Use a switch statement to print the correct value using the operators as cases.
    Set the default condition to an error.
    Ensure any division provides a double answer with a precision of two decimal places.
    NOTE: Scan the arithmetic operator as a char
*/

#include <stdio.h>

int main(void)
{
    // A zeroized array of ages for people in the classroom
    int classAges [5] = {0};

    /*
    // Inserts the age of the instructor
    classAges[0] = 40;

    // Inserts the age of each student
    classAges[1] = 27;
    classAges[2] = 33;
    classAges[3] = 29;
    classAges[4] = 28;
    classAges[5] = 26;

    // Displays the ages of the instructor and of the students
    printf("\nThe instructor's age is %d.\n", classAges[0]);
    printf("Student 1's age is %d.\n", classAges[1]);
    printf("Student 2's age is %d.\n", classAges[2]);
    printf("Student 3's age is %d.\n", classAges[3]);
    printf("Student 4's age is %d.\n", classAges[4]);
    printf("Student 5's age is %d.\n", classAges[5]);
    */
   
    // Loops through and assigns ages to the instructor and students
    for (int i = 0; i < 5; i++)
    {
        classAges[i] = 40 - i * 2;
    }

    // Displays the instructor's age
    printf("\nThe instructor's age is %d.\n", classAges[0]);

    // Displays the students' ages
    for (int i = 1; i < 5; i++)
    {
        classAges[i] = 40 - i * 2;
        printf("Student %d's age is %d.\n", i + 1, classAges[i]);
    }

    // Ends main function & terminates program
    return 0;
}