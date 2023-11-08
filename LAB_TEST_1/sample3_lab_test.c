#include <stdio.h>

int main()
{
    // Prompt user to input starting and ending numbers
    int starting_number;
    printf("Starting number >> ");
    scanf("%d", &starting_number);

    int ending_number;
    printf("Ending number >> ");
    scanf("%d", &ending_number);

    int number;
    int total_numbers = 0;
    // Construct a loop that iterate from starting number to ending number
    for (number = starting_number ; number < ending_number; number += 3) // Increment of 3
    {
        // Check if the number is divisible by 5
        if (number % 5 == 0)
        {
            // If so, do not print but continue the loop
            continue;
        }

        printf("%d ", number); 
        total_numbers += 1; // Add 1 to total numbers
    }

    printf("\nThere are total of %d numbers in between %d and %d", total_numbers, starting_number, ending_number);

    return 0;
}