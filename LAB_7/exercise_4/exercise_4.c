#include <stdio.h>

int calculate(int *ptr1, int *ptr2)
{
    return *ptr1 + *ptr2;
}

int main()
{
    int number1;
    int number2;

    printf("Enter value of number1 and number2: ");
    scanf("%d %d", &number1, &number2);

    int sum = calculate(&number1, &number2);
    printf("The sum of the numbers is: %d", sum);
}