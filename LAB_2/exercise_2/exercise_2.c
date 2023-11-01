/*
Using switch case / multiple selection, write a program to ask the user to choose the color using
alphabet as shown below.
*/
#include <stdio.h>
// #include <ctype.h> // For lowercasing char to reduce code complexity

int main()
{
    // Prompt user to input.
    printf("Please enter your choice (B - Blue / C - Cyan / G - Green / R - Red / Y - Yellow): ");

    // Get user's input.
    char choice;
    scanf("%c", &choice);

    // Use switch case or if else to check for each possibility of user input.
    // Then print the chosen color according to the user input.
    switch (choice)
    {
    case 'B':
    case 'b':
        printf("Your chosen color is BLUE");
        break;
    case 'C':
    case 'c':
        printf("Your chosen color is CYAN");
        break;
    case 'G':
    case 'g':
        printf("Your chosen color is GREEN");
        break;
    case 'R':
    case 'r':
        printf("Your chosen color is RED");
        break;
    case 'Y':
    case 'y':
        printf("Your chosen color is YELLOW");
        break;
        // A default case if user entered an invalid character.
    default:
        printf("Please select a valid color.");
        break;
    }

    return 0;
}