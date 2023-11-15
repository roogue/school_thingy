#include <stdio.h>
#include <stdlib.h>

int addtion(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);
int difference(int x, int y);
void displayUserInput();
void displayMenu();

void main(void)
{
    // Prompt user to enter two numbers
    int x;
    int y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    displayUserInput(x, y);

    // Print menu and prompt user to choose an operation
    unsigned int choose; // Use unsigned data type to prevent negative numbers
    int loop = 1;        // flag, 1 stands for loop, 0 stands for stop
    while (loop == 1)
    {
        do
        {
            displayMenu();
            scanf("%d", &choose);
            // Print the operation
            switch (choose)
            {
            case 1:
                printf("Addtion of %d & %d is = %d\n", x, y, addtion(x, y));
                break;
            case 2:
                printf("Subtraction of %d & %d is = %d\n", x, y, subtraction(x, y));
                break;
            case 3:
                printf("Multiplication of %d & %d is = %d\n", x, y, multiplication(x, y));
                break;
            case 4:
                printf("Division of %d & %d is = %d\n", x, y, division(x, y));
                break;
            case 5:
                printf("Difference of %d & %d is = %d\n", x, y, difference(x, y));
                break;
            case 6:
                loop = 0; // Set loop to stop
                break;
            default:
                printf("Please select a valid operation");
                break;
            }
        } while (choose == 0 && choose > 6); // If invalid option, we will continue to prompt user until we get a valid one.
    }
}

void displayMenu()
{
    printf("\nPlease choose one of the following: \n");
    printf("1 - Addition Operation.\n");
    printf("2 - Substraction Operation.\n");
    printf("3 - Multiplication Operation.\n");
    printf("4 - Division Operation.\n");
    printf("5 - Difference Operation.\n");
    printf("6 - Exit.\n");
    printf(">> ");
};

void displayUserInput(int x, int y)
{
    printf("You've entered %d and %d.\n", x, y);
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