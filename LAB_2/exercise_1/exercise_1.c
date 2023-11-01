/*
Write a C program using nested if-else or multi selection if-else structure to determine whether the year
entered is a leap year or not.
*/

// Rules of leap year checking:
// 1) The year must be divisible by 4.
// 2) The year cannot be divisible by 100, unless it is divisible by 400.
#include <stdio.h>

int main()
{
    // Prompt for user input
    printf("Please enter the year: ");

    // Get user's input
    int year;
    scanf("%d", &year);
    printf("\n");

    // Check if the year is leap year or not according to the rule with nested loop.
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            // Only check if it is divisible by 400 when it is divisible by 100.
            if (year % 400 == 0)
            {
                // Year is divisible by 4, 100 and 400.
                printf("The %d is a leap year", year);
            }
            else
            {
                // Year is divisible by 4, 100 but not 400.
                printf("The %d is not a leap year", year);
            }
        }
        else
        {
            // Year is divisible by 4, but not 100.
            printf("The %d is a leap year", year);
        }
    }
    else
    {
        // Year is not divisible by 4.
        printf("The %d is a not a leap year", year);
    }

    return 0;
}