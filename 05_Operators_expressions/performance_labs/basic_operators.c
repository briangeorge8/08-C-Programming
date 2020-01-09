/*
Name: Brian George
Date: 09 Jan 20
Project: Basic Operators

Objective: 
    Demonstrate understanding of basic programming operators
*/

#include <stdio.h>

int main(void)
{
    // Variables needed to conduct the basic operators functions
    int x = 9;
    int y = 3;

    // Computes and displays the results to basic operators functions
    printf("%d *- %d = %d\n", x, y, x *- y);
    x = 9;
    y = 3;
    printf("%d /= %d = %d\n", x, y, x /= y);
    x = 9;
    y = 3;
    printf("%d %= %d = %d\n", x, y, x %= y);
    x = 9;
    y = 3;
    printf("%d += %d = %d\n", x, y, x += y);
    x = 9;
    y = 3;
    printf("%d -= %d = %d\n", x, y, x -= y);
    x = 9;
    y = 3;
    printf("%d *= ++%d = %d\n", x, y, x *= ++y);
    x = 9;
    y = 3;
    printf("%d /= %d-- = %d\n", x, y, x /= y--);
    x = 9;
    y = 3;
    printf("%d %= --%d = %d\n", x, y, x %= --x);
    x = 9;
    y = 3;
    printf("%d += --%d = %d\n", x, y, x += --y);
    x = 9;
    y = 3;
    printf("%d -= %d++ = %d\n", x, y, x -= y++);
    x = 9;
    y = 3;
    printf("(%d %= %d) || (%d /= %d--) = %d\n", y, y, x, x, (y %= y) || (x /= x--));

    return 0;
}