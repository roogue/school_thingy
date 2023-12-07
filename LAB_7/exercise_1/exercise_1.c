#include <stdio.h>
int main()
{
    int number;
    int *ptr;
    number = 7;
    ptr = &number;
    printf("The value of the variable number is %d", *ptr);
}