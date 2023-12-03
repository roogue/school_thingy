#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // set seed with current time

    // loop for 20 times to generate 20 random numbers
    for (int i = 0; i < 20; i++)
    {
        // Generate random number with upper and lower limit
        int upper_limit = 200;
        int lower_limit = 1;
        int random_number = (rand() % (upper_limit - lower_limit + 1)) + lower_limit;

        // print random number left justified, show + sign, 10 field width, and one decimal point
        printf("%-+10.1f", (float)random_number);

        // print a new line after every three random numbers were printed
        if ((i + 1) % 3 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}