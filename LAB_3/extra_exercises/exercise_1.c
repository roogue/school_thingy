#include <stdio.h>

int main()
{
    // declare the varaibles
    int num1, num2;
    int sum, sub, mult, mod;
    float div;

    char user_input_continuity;
    do
    {
        // Input two numbers from user
        printf("Enter any two numbers: ");
        scanf("%d%d", &num1, &num2);

        // Perform all arithmetic operations
        sum = num1 + num2;
        sub = num1 - num2;
        mult = num1 * num2;
        div = (float)num1 / num2;
        mod = num1 % num2;

        // print results of multiplication & division operations
        printf("SUM = %d\n", sum);
        printf("DIFFERENCE = %d\n", sub);
        printf("PRODUCT = %d\n", mult);
        printf("QUOTIENT = %f\n", div);
        printf("MODULUS = %d\n", mod);
        printf("SUM = %d\n", (num1 + num2));

        // Prompt to continue or exit
        printf("\nPress any key to continue OR press [N/n] to Exit. : ");
        scanf("%c", &user_input_continuity);

    } while (user_input_continuity != 'n' || user_input_continuity != 'N'); // This is to check if user has inputted 'N' or 'n' or not

    printf("Thank you for using this program, Bye!!!\n");

    return 0;
}