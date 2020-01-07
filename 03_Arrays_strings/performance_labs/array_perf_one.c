/*
Name: Brian George
Date: 07 Jan 20
Project: Student Ages

Objective: Student ages
    Declare and zeroize an int array with a dimension equal to the number of students + 1
    Set index 0 with the age* of the instructor
    Fill the elements of the array with the ages* of the students starting with index 1
    Print the array
NOTE: * use your best guess
*/

#include <stdio.h>

int main()
{
    // A zeroized array of ages for people in the classroom
    int classAges [5] = {0};

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

    // Ends main function & terminates program
    return 0;
}