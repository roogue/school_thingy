#include <stdio.h>

int main()
{
    printf("Enter the amount in Malaysian Ringgit: ");

    double amount;
    scanf("%lf", &amount);

    int ringgit_notes;
    int cent_coins;

    ringgit_notes = amount / 5;

    /*
     * We find the remainder(in rm) after subtracting the 5 ringgit notes from the amount
     * then we divide by rm0.5 to find the amount of 50cents coins needed
     */
    cent_coins = (amount - (ringgit_notes * 5)) / 0.5;

    /*
     * Or there's another approach:
     */
    // cent_coins = ((int)(amount * 100) % 500) / 50;

    printf("Total 5 Ringgit notes: %+-10d\n", ringgit_notes);
    printf("Total 50 cent coins: %+-10d", cent_coins);

    return 0;
}