/*
Name: Brian George
Date: 09 Jan 20
Project: Basic Logic

Objective: 
    Demonstrate understanding of basic programming logic
*/

#include <stdio.h>

int main(void)
{
    // Variables needed to conduct the basic logic functions
    int x = 99;
    int y = 0;

    // Computes and displays the results to basic logic functions
    printf("%d && %d = %d\n", x, y, x && y);
    printf("%d || %d = %d\n", y, x, y || x);
    printf("!%d = %d\n", y, !y);
    printf("%d && 0 = %d\n", y, y && 0);
    printf("%d || 42 = %d\n", x, x || 42);
    printf("!%d = %d\n", x, !x);
    printf("%d && %d = %d\n", x, x, x && x);
    printf("%d || %d = %d\n", y, y, y || y);
    printf("!1 = %d\n", !1);
    printf("1 && 1 = %d\n", 1 && 1);
    printf("(0 && 1) || (2 && 3) = %d\n", (0 && 1) || (2 && 3));

    return 0;
}