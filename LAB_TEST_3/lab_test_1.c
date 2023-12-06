#include <stdio.h>
#include <stdlib.h>

int roundToNearestThousand(int number);
int getUserInput();

int main()
{
    int number;
    while (1)
    {
        number = getUserInput();

        if (number == 0)
        {
            exit(0);
        }

        int roundedNumber = roundToNearestThousand(number);
        printf("Number after processing: %d\n", roundedNumber);
    }
}

int getUserInput()
{
    int input;
    do
    {
        printf("Enter an integer (0 to exit): ");
        scanf("%d", &input);

        // Check if input is negative value or not
        if (input < 0)
        {
            printf("Only positive numbers!\n");
        }
    } while (input < 0);

    return input;
}

int roundToNearestThousand(int number)
{   
    // If number < 1000, do not do rounding
    if (number < 1000)
    {
        return number;
    }

    // Use implicit casting to round
    if (number % 1000 < 500)
    {
        return (number / 1000) * 1000;
    }

    if (number % 1000 > 500)
    {
        return ((number / 1000) + 1) * 1000;
    }
}
