/*
Name: Brian George
Date: 07 Jan 20
Project: Array Practice

Objective: 
Declare and initialize the following arrays:
    data type   name            dimension   initialize to:
    int         myIntArray      10          100 (every index)
    float       myFloatArray    5           1-5
    char        myCharArray     256         0 (every index)
print the 3rd element of each array above using:
    array data type     syntax
    int                 printf("%d\n", myIntArray[2]);
    float               printf("%f\n", myFloatArray[2]);
    char                printf("%c\n", myCharArray[2]);
Perform the following manipulations on your arrays:
    myIntArray - set all elements to x while: 
        y = index #
        x = (y+1) * 10
    myFloatArray - set all elements to x while: 
        y = current value of a given index
        x = y * 1.1
    myCharArray - fill in the beginning elements with your last name starting with index 0
Print the third index of each array again
*/

#include <stdio.h>

int main()
{
    // Creates the required arrays
    int myIntArray [10] = {100};
    float myFloatArray [5] = {1, 2, 3, 4, 5};
    char myCharArray [256] = {'0'};

    // Displays the third item in each array
    printf("%d\n", myIntArray[2]);
    printf("%f\n", myFloatArray[2]);
    printf("%c\n", myCharArray[2]);

    // Modifies each array based on the above requirements
    myIntArray[0] = (myIntArray[0] + 1) * 10;
    myFloatArray[0] = myFloatArray[0] * 1.1;
    myCharArray[0] = 'G';
    myCharArray[1] = 'E';
    myCharArray[2] = 'O';
    myCharArray[3] = 'R';
    myCharArray[4] = 'G';
    myCharArray[5] = 'E';

    // Ends main function & terminates program
    return 0;
}