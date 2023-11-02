#include <stdio.h>

int main()
{
    // declare the varaibles
    int num1, num2;
    int sum, sub, mult, mod;
    int operation_type; // Remember to switch operation_type to int
    char user_input_continuity;
    float div;

    do
    {
        // Input two numbers from user
        printf("Enter any two numbers: ");
        scanf("%d%d", &num1, &num2);

        printf("Choose an arithmetic operation type: ['+': 1, '-': 2, '*': 3, '/': 4, '%%': 5]: "); // To print the resevred character '%', we can add another '%' after it.
        fflush(stdin);
        scanf("%d", &operation_type);
        // Perform arithmetic operations according to the user selected type
        switch (operation_type)
        {
        case 1: // Integer does not require the single quotes ''
        {
            sum = num1 + num2;
            printf("SUM = %d\n", sum);
            break;
        }
        case 2:
        {
            sub = num1 - num2;
            printf("DIFFERENCE = %d\n", sub);
            break;
        }
        case 3:
        {
            mult = num1 * num2;
            printf("PRODUCT = %d\n", mult);
            break;
        }
        case 4:
        {
            div = (float)num1 / num2;
            printf("QUOTIENT = %f\n", div);
            break;
        }
        case 5:
        {
            mod = num1 % num2;
            printf("MODULUS = %d\n", mod);
            break;
        }
        default:
            printf("The arithmetic operation type you provided is not valid!");
        }

        // Prompt to continue or exit
        printf("\nPress any key to continue OR press [N/n] to Exit: ");
        fflush(stdin);
        scanf("%c", &user_input_continuity);
    } while (user_input_continuity != 'n' && user_input_continuity != 'N'); // This is to check if user has inputted 'N' or 'n' or not

    printf("Thank you for using this program, Bye!!!\n");

    return 0;
}