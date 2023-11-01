/*
Write a C program using for loop, while loop and do-while loop, to calculate the sum and average of 10
numbers that entered by user (two decimal points).
*/

#include <stdio.h>
const int loops = 10; // This is to define a constant loop amount for consistency and ease of debugging.

int main()
{
    printf("Please enter %d numbers\n", loops);

    // Use for-loop to collect numbers while summing up each of them.
    // To use while loop:
    /*
    int i = 0;
    while (i < 10) {
        // summation code...
        i++
    }
    */
    // To use do-while loop:
    /*
    int i = 0;
    do {
        // summation code...
        i++
    }
    while (i < 10) 
    */
    int sum = 0;
    for (int i = 0; i < loops; i++)
    {
        // Prompt user to enter number
        printf("Number #%d >> ", i + 1);

        int user_input_number;
        scanf("%d", &user_input_number);

        // add user's input number to the sum variable
        sum += user_input_number;
    }

    // Calculate the average by dividing the sum by number of loops
    double average;
    average = (double)sum / loops; // Explicitly cast data type of sum to make sure no potential lose of data

    printf("The sum of %d numbers is %d\n", loops, sum);
    printf("The average is %.2f", average); // %.2f means 2 decimal points -> %.3f means 3 decimal points and so on..

    return 0;
}