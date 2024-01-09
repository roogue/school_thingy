// Yong Wei Sen 97876 - LabTest04 set 5
#include <stdio.h>
#include <ctype.h>

// Define the rows and cols of the 2d array
#define ROWS 3
#define COLS 3

int main()
{
    char array[ROWS][COLS];

    printf("Enter elements for a 3x3 character array: \n");
    int i;
    int j;
    // Loop to let user enter every element of the array
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("Element - [%d][%d]: ", i, j);
            scanf("%c", &array[i][j]);
            array[i][j] = tolower(array[i][j]); // Set the entered character to lowercase for optimal functionality
            fflush(stdin);
        }
    }

    printf("The entered 3x3 character array is: \n");
    // Use loop to print every character in matrix form
    for (i = 0; i < ROWS; i++)
    {

        for (j = 0; j < COLS; j++)
        {
            printf("%10c", toupper(array[i][j])); // Print the character in a width of 10
        }
        printf("\n");
    }

    // define frequency variable with 26 memory allocation
    int frequency[26];
    // initiate every location of the memory to 0
    for (i = 0; i < 26; i++)
    {
        frequency[i] = 0; 
    }
    // for every elements in the array,
    for (i = 0; i < ROWS; i++)
    {

        for (j = 0; j < COLS; j++)
        {
            frequency[array[i][j] - 'a']++; // increase the frequency of the character by one
            // 'some alphabet' - 'a' is the index from 0 - 25
        }
    }

    int highestFrequency = 0;
    int position = 0;
    printf("Occurrences of each character: \n");
    // For every frequency of the character, 
    for (i = 0; i < 26; i++)
    {   
        // if the frequency of the character is not 0
        if (frequency[i] != 0)
        {
            // We print the occurrences number of the character
            printf("Character %c: %d occurrences\n", toupper(i + 'a'), frequency[i]);
            // position + 'a; will get the actual alphabet in the range of 0-25
        }

        // if the frequency is higher than the highestFrequency we set before,
        if (frequency[i] > highestFrequency)
        {
            // we set a new highest frequency
            highestFrequency = frequency[i];
            position = i; // then set the index of the character to current character
        };
    }
    printf("The most frequent character is: %c, occurring %d times.", toupper(position + 'a'), highestFrequency);

    return 0;
}