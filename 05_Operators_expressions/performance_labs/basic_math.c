/*
Name: Brian George
Date: 09 Jan 20
Project: Basic Math

Objective: 
    Demonstrate understanding of basic programming math
*/

#include <stdio.h>

int main(void)
{
    // Variables needed to conduct the basic math functions
    int x = 7;
    int y = 4;
    float result = 0;

    // Computes and displays the results to basic math functions
    result = x * y;
    printf("%d * %d = %f\n", x, y, result);

    result = (float)x / y;
    printf("%d / %d = %f\n", x, y, result);

    result = x % y;
    printf("%d %% %d = %f\n", x, y, result);

    result = y + x;
    printf("%d + %d = %f\n", y, x, result);

    result = y - x;
    printf("%d - %d = %f\n", y, x, result);

    result = -y;
    printf("-%d = %f\n", y, result);

    result = ++x;
    printf("++%d = %f\n", x, result);

    result = y++;
    printf("%d++ = %f\n", y, result);

    result = x--;
    printf("%d-- = %f\n", x, result);

    result = --y;
    printf("--%d = %f\n", y, result);

    result = 1 + 2 * (3 + y) + 5;
    printf("1 + 2 * (3 + %d) + 5 = %f\n", y, result);

    return 0;
}