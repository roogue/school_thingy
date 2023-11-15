#include <stdio.h>

void getUserInput();

// Set it as global variable
int x;
int y;

int main(void)
{
    printf("Enter two numbers: "); /* prompt user */
    getUserInput();                // call the function
    printf("You've entered %d and %d.\n", x, y);
}

void getUserInput()
{
    scanf("%d %d", &x, &y); /* read values from keyboard */
}