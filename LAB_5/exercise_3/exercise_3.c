#include <stdio.h>

void displayUserInput();

int main(void)
{
    int x;
    int y;
    printf("Enter two numbers: "); /* prompt user */
    scanf("%d %d", &x, &y);        /* read values from keyboard */
    displayUserInput(x, y);        /* call the function with the x, y values passed as parameters */
}

void displayUserInput(int x, int y) /* A function that takes two parameters */
{
    printf("You've entered %d and %d.\n", x, y);
}