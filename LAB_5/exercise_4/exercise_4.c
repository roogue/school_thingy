#include <stdio.h>
#include <stdlib.h>

int addtion(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);
int difference(int x, int y);
void displayUserInput();

void main(void)
{
    int x;
    int y;
    printf("Enter two numbers: "); /* prompt user */
    scanf("%d %d", &x, &y);        /* read values from keyboard */
    displayUserInput(x, y); /* Call the displayUserInput function */
}

void displayUserInput(int x, int y)
{
    printf("You've entered %d and %d.\n", x, y);
    printf("\n");
    printf("Addtion of %d & %d is = %d\n", x, y, addtion(x, y));
    printf("Subtraction of %d & %d is = %d\n", x, y, subtraction(x, y));
    printf("Multiplication of %d & %d is = %d\n", x, y, multiplication(x, y));
    printf("Division of %d & %d is = %d\n", x, y, division(x, y));
    printf("Difference of %d & %d is = %d\n", x, y, difference(x, y));
};
/* Addition function */
int addtion(int x, int y)
{
    return x + y;
};
/* Subtraction function */
int subtraction(int x, int y)
{
    return x - y;
};
/* Multiplication function */
int multiplication(int x, int y)
{
    return x * y;
};
/* Division function */
int division(int x, int y)
{
    return x / y;
};
/* Difference function */
int difference(int x, int y)
{
    return abs(x - y);
};