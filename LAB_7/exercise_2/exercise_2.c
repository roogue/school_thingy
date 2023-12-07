#include <stdio.h>
int main()
{
    int number;
    int *ptr;
    number = 7;
    ptr = &number;
    printf("The value and the address of the variable number is %d and %d\n", number, &number);
    printf("The value and the address of the pointer is %d and %d\n", ptr, &ptr);
}