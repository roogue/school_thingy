#include <stdio.h>

int main()
{
    // Prompt for user input
    printf("Please enter the year: ");

    // Get user's input
    int year;
    scanf("%d", &year);
    printf("\n");

    // Wtf?
    year % 4 == 0 ? year % 100 == 0 ? year % 400 == 0 ? printf("%d is a leap year", year) : printf("%d is not a leap year", year) : printf("%d is a leap year", year) : printf("%d is not a leap year", year);

    return 0;
}