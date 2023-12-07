// Yong Wei Sen (97876) - Lab Test 03 Set 5
#include <stdio.h>

// Define the important values
int eggProduced;
int eggBroken;
float profitMargin;

// This function helps to prompt user to enter the
// total number of egg produced, egg broken and the profit margin 
void promptUser(void)
{
    // Total number of egg produced
    printf("\nEnter the total number of eggs produced today: ");
    scanf("%d", &eggProduced);

    // Total number of egg broken
    printf("Enter the number of broken eggs today: ");
    scanf("%d", &eggBroken);

    // Profit margin
    printf("Enter the profit margin percentage for broken eggs: ");
    scanf("%f", &profitMargin);
}

// This function takes the amount of egg produced and egg broken
// as well as profit margin to calculate the maximum allowed broken eggs
// and return either 0 or 1 to determine if the farm is making profit or not
// 1 -> profit
// 0 -> loss
int calculateAndOutput(int eggProduced, int eggBroken, float profitMargin)
{
    // Calculate maximum allowed eggs
    int maximumAllowed = eggProduced * (profitMargin / 100);

    printf("\nMaximum allowed broken eggs for profit: %d\n", maximumAllowed);

    // If egg broken greater than maximum allowed
    // return 0, else return 1
    if (eggBroken > maximumAllowed)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

// This function display if the farm is making profit or not
// by taking the isProfit integer
// 0 -> loss
// 1 -> profit
void profitNot(int isProfit)
{
    if (isProfit == 0)
    {
        printf("The farm makes a loss today.\n");
    }
    else if (isProfit == 1)
    {
        printf("The farm makes a profit today.\n");
    }
}

int main()
{
    char cont;
    do
    {
        promptUser();

        int isProfit = calculateAndOutput(eggProduced, eggBroken, profitMargin);

        profitNot(isProfit);

        // Prompt if user want to keep on entering
        printf("Do you want to enter data for another day? (Y/N): ");
        fflush(stdin);
        scanf("%c", &cont);
    } while (cont == 'Y' || cont == 'y');

    return 0;
}
