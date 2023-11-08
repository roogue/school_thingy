#include <stdio.h>

int main()
{   
    // Prints the game header.
    printf("==== Guess my age ====\n");
    printf("You have 5 attempts to guess my age.\n");

    int mysterious_number = 18; // Define the mysterious number for user to guess.

    // Give user 5 attempts to guess,
    // the loop/game will end after the chances runs out (chance == 0)
    int chance;
    for (chance = 5; chance > 0; chance--)
    {   
        // Scan for user's input
        int user_guess_number;
        printf("Enter your guess: ");
        scanf("%d", &user_guess_number);

        // Check if user guessed the correct age.
        if (user_guess_number == mysterious_number)
        {   
            printf("Congratulations! You guessed my age correctly. You're a mind reader!\n");
            break; // Use break to stop the loop immediately
        }
        else if (chance != 1)  // If user guessed it wrong, but have chance.
        {   
            // We check if the number that user guessed is higher than the mysterious number or not.
            // If the number user guessed is higher, notify user that his attempt is too high
            // Same applied to if the number is lower.
            if (user_guess_number > mysterious_number)
            {   
                printf("Try again! Your guess is too high. You have %d attempts left\n", chance - 1);
            }
            else if (user_guess_number < mysterious_number)
            {
                printf("Try again! Your guess is too low. You have %d attempts left\n", chance - 1);
            }
        }
        else // user guessed it wrong, and also ran out of chance.
        {
            printf("Game over! You couldn't guess my age. My actual age is %d\n", mysterious_number);
            break; // Break here is not neccessary since we've already defined the number of loops
            // But i liked it.
        }
    }
}