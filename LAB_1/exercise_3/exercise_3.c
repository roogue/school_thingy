#include <stdio.h>
int main()
{
    int number1;
    double number2;
    char alphabet;
    printf("Please enter a letter: ");
    scanf("%c", &alphabet);

    printf("Please enter an integer number: ");
    scanf("%d", &number1);
    fflush(stdin);
    printf("Please enter a decimal number: ");
    scanf("%lf", &number2);
    printf("Your entered input are >> ");
    printf("%c \t %d \t and %lf", alphabet, number1, number2);
    return 0;
}
