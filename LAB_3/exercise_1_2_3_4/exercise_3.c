#include <stdio.h>

void main()
{
    int x, i;
    i = 10;
    x = i++; // post increment
    // Basically x was assigned by i's value first then i + 1
    printf("x: %d\n", x);
    printf("i: %d\n", i);
}