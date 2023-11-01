#include <stdio.h>

void main()
{
    int x, i;
    i = 10;
    x = --i; // pre decrement
    // Basically i - 1 first, then be assigned to x
    printf("x: %d\n", x);
    printf("i: %d\n", i);
}