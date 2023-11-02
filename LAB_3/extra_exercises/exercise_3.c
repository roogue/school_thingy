#include <stdio.h>

int main()
{
    // declare the varaibles
    int num1, num2;
    int sum, sub, mult, mod;
    char user_input_continuity, operation_type;
    float div;

    do
    {
        // Input two numbers from user
        printf("Enter any two numbers: ");
        scanf("%d%d", &num1, &num2);

        printf("Choose an arithmetic operation type: ['+', '-', '*', '/', '%%']: "); // To print the resevred character '%', we can add another '%' after it.
        fflush(stdin);
        scanf("%c", &operation_type);
        // Perform arithmetic operations according to the user selected type
        switch (operation_type)
        {
        case '+': // char require to put single quotes ''
        {
            sum = num1 + num2;
            printf("SUM = %d\n", sum);
            break;
        }
        case '-':
        {
            sub = num1 - num2;
            printf("DIFFERENCE = %d\n", sub);
            break;
        }
        case '*':
        {
            mult = num1 * num2;
            printf("PRODUCT = %d\n", mult);
            break;
        }
        case '/':
        {
            div = (float)num1 / num2;
            printf("QUOTIENT = %f\n", div);
            break;
        }
        case '%':
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