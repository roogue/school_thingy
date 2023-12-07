#include <stdio.h>
int main()
{
    int number1;
    int number2;

    printf("Enter value of number1 and number2: ");
    scanf("%d %d", &number1, &number2);

    int *ptr1;
    int *ptr2;

    ptr1 = &number1;
    ptr2 = &number2;

    int sum = *ptr1 + *ptr2;
    printf("The sum of the numbers is: %d", sum);
}