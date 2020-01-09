/*
Name: Brian George
Date: 09 Jan 20
Project: Basic Relational

Objective: 
    Demonstrate understanding of basic programming relational logic
*/

#include <stdio.h>

int main(void)
{
    // Variables needed to conduct the basic relational logic functions
    int x = 2;
    int y = 6;

    // Computes and displays the results to basic relational logic functions
    printf("%d < %d = %d\n", y, x, y < x);
    printf("%d <= %d = %d\n", y, x, y <= x);
    printf("%d > %d = %d\n", y, x, y > x);
    printf("%d >= %d = %d\n", y, x, y >= x);
    printf("%d == %d = %d\n", y, x, y == x);
    printf("%d != %d = %d\n", y, x, y != x);
    printf("2 == %d = %d\n", x, 2 == x);
    printf("6 != %d = %d\n", x, 6 != x);
    printf("6 >= 2 = %d\n", 6 >= 2);
    printf("2 < 6 = %d\n", 2 < 6);
    printf("%d != %d != 3 >= %d = %d\n", x, y, x, x != y != 3 >= x);

    return 0;
}