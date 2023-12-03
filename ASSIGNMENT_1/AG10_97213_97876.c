/*
 * A C program for TMF1414 Introduction to Programming - Pair Assignment
 * Group Member:
 *  - Afrina Firzana binti Al-Khalid (97213)
 *  - Yong Wei Sen (97876)
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Monthly Income
 */
double monthlyIncome = 0;

/*
 * Expense Categories:
 * - Academic
 * - Groceries
 * - Rental
 * - Transportation
 * - Stationery
 * - Entertainment
 */
/* Expense limits*/
double academicExpenseLimit = 0;
double groceriesExpenseLimit = 0;
double rentalExpenseLimit = 0;
double transportationExpenseLimit = 0;
double stationeryExpenseLimit = 0;
double entertainmentExpenseLimit = 0;

/* Daily Expenses */
double academicDailyExpense = 0;
double groceriesDailyExpense = 0;
double rentalDailyExpense = 0;
double transportationDailyExpense = 0;
double stationeryDailyExpense = 0;
double entertainmentDailyExpense = 0;

int main()
{

    /*
     * Monthly Income Loop
     *
     * This section of code initiates a loop to gather and validate the user's monthly income
     * The loop will only stop after user had inputted a valid monthly income value.
     */
    int MonthlyIncome_loop = 1;
    int MonthlyIncome_isZero = 0;
    do
    {
        /*
         * Prompt for monthly income
         */
        system("cls");
        printf("=== Student Personal Finance Manager ===\n");

        /* Notify user if his/her input is not valid */
        if (MonthlyIncome_isZero == 1)
        {
            printf("--> Please insert a value that is greater than zero!\n");
            MonthlyIncome_isZero = 0;
        }

        printf("Please enter your monthly income: ");
        scanf("%lf", &monthlyIncome);
        fflush(stdin);

        /* Ensure a positive number */
        monthlyIncome = fabs(monthlyIncome);

        /*
         * Validate the user's monthly income,
         * if monthly income is zero, set MonthlyIncome_isZero flag,
         * else exit the loop
         */
        if (monthlyIncome == 0)
        {
            MonthlyIncome_isZero = 1;
        }
        else
        {
            MonthlyIncome_loop = 0;
        }
    } while (MonthlyIncome_loop == 1);

    /*
     * Expense Limits Loop
     *
     * This section of code initiates a loop to gather and validate the user's monthly expense limits for different categories
     * To exit the loop, user must ensure
     *  - The input is valid
     *  - The sum of expense limits does not exceed the monthly income
     */
    int ExpenseLimits_loop = 1;
    int ExpenseLimits_isInvalidInput = 0;
    int ExpenseLimits_isExceedMonthlyIncome = 0;
    do
    {
        /*
         *  Prompt for expense limits
         */
        system("cls");
        printf("=== Student Personal Finance Manager ===\n");
        printf("Monthly Income: %.2lf\n", monthlyIncome);

        /* Warn or notify user depends on the flag */
        if (ExpenseLimits_isInvalidInput == 1)
        {
            printf("--> Your input is invalid, please try again!\n");
            ExpenseLimits_isInvalidInput = 0;
        }
        if (ExpenseLimits_isExceedMonthlyIncome == 1)
        {
            printf("--> Your monthly expense limits should not exceed monthly income!\n");
            ExpenseLimits_isExceedMonthlyIncome = 0;
        }

        printf("Please enter your monthly expense limit for each category.\n");
        printf("[1] Academics (%.2lf): \n", academicExpenseLimit);
        printf("[2] Groceries (%.2lf): \n", groceriesExpenseLimit);
        printf("[3] Rental (%.2lf): \n", rentalExpenseLimit);
        printf("[4] Transportation (%.2lf): \n", transportationExpenseLimit);
        printf("[5] Stationery (%.2lf): \n", stationeryExpenseLimit);
        printf("[6] Entertainment (%.2lf): \n", entertainmentExpenseLimit);
        printf("[7] Next\n");
        printf("Please select an option: ");
        int categorySelection;
        scanf("%d", &categorySelection);
        fflush(stdin);

        /*
         * Math every cases from 1 - 7,
         * If it matches a category of expense, set the limit of the expense
         * If 7 is selected, set the loop condition flag to 0
         * else, mark the input as invalid value.
         */
        double inputExpenseLimit;
        double sumOfExpenseLimits;
        switch (abs(categorySelection))
        {
        case 1:
            printf("Expense limit for Academic: ");
            scanf("%lf", &inputExpenseLimit);
            fflush(stdin);
            sumOfExpenseLimits = inputExpenseLimit + groceriesExpenseLimit + rentalExpenseLimit + transportationExpenseLimit + stationeryExpenseLimit + entertainmentExpenseLimit;
            if (sumOfExpenseLimits <= monthlyIncome)
            {
                academicExpenseLimit = fabs(inputExpenseLimit);
            }
            else
            {
                ExpenseLimits_loop = 1;
                ExpenseLimits_isExceedMonthlyIncome = 1;
            }
            break;
        case 2:
            printf("Expense limit for Groceries: ");
            scanf("%lf", &inputExpenseLimit);
            fflush(stdin);
            sumOfExpenseLimits = academicExpenseLimit + inputExpenseLimit + rentalExpenseLimit + transportationExpenseLimit + stationeryExpenseLimit + entertainmentExpenseLimit;
            if (sumOfExpenseLimits <= monthlyIncome)
            {
                groceriesExpenseLimit = fabs(inputExpenseLimit);
            }
            else
            {
                ExpenseLimits_loop = 1;
                ExpenseLimits_isExceedMonthlyIncome = 1;
            }
            break;
        case 3:
            printf("Expense limit for Rental: ");
            scanf("%lf", &inputExpenseLimit);
            fflush(stdin);
            sumOfExpenseLimits = academicExpenseLimit + groceriesExpenseLimit + inputExpenseLimit + transportationExpenseLimit + stationeryExpenseLimit + entertainmentExpenseLimit;
            if (sumOfExpenseLimits <= monthlyIncome)
            {
                rentalExpenseLimit = fabs(inputExpenseLimit);
            }
            else
            {
                ExpenseLimits_loop = 1;
                ExpenseLimits_isExceedMonthlyIncome = 1;
            }
            break;
        case 4:
            printf("Expense limit for Transportation: ");
            scanf("%lf", &inputExpenseLimit);
            fflush(stdin);
            sumOfExpenseLimits = academicExpenseLimit + groceriesExpenseLimit + rentalExpenseLimit + inputExpenseLimit + stationeryExpenseLimit + entertainmentExpenseLimit;
            if (sumOfExpenseLimits <= monthlyIncome)
            {
                transportationExpenseLimit = fabs(inputExpenseLimit);
            }
            else
            {
                ExpenseLimits_loop = 1;
                ExpenseLimits_isExceedMonthlyIncome = 1;
            }
            break;
        case 5:
            printf("Expense limit for Stationery: ");
            scanf("%lf", &inputExpenseLimit);
            fflush(stdin);
            sumOfExpenseLimits = academicExpenseLimit + groceriesExpenseLimit + rentalExpenseLimit + transportationExpenseLimit + inputExpenseLimit + entertainmentExpenseLimit;
            if (sumOfExpenseLimits <= monthlyIncome)
            {
                stationeryExpenseLimit = fabs(inputExpenseLimit);
            }
            else
            {
                ExpenseLimits_loop = 1;
                ExpenseLimits_isExceedMonthlyIncome = 1;
            }
            break;
        case 6:
            printf("Expense limit for Entertainment: ");
            scanf("%lf", &inputExpenseLimit);
            fflush(stdin);
            sumOfExpenseLimits = academicExpenseLimit + groceriesExpenseLimit + rentalExpenseLimit + transportationExpenseLimit + stationeryExpenseLimit + inputExpenseLimit;
            if (sumOfExpenseLimits <= monthlyIncome)
            {
                entertainmentExpenseLimit = fabs(inputExpenseLimit);
            }
            else
            {
                ExpenseLimits_loop = 1;
                ExpenseLimits_isExceedMonthlyIncome = 1;
            }
            break;
        case 7:
            ExpenseLimits_loop = 0;
            break;
        default:
            ExpenseLimits_isInvalidInput = 1;
            break;
        }

        /* Continue the loop if user inputted an invalid value  */
        if (ExpenseLimits_isInvalidInput == 1)
        {
            ExpenseLimits_loop = 1;
        }

    } while (ExpenseLimits_loop == 1);

    /*
     * Main Program Loop
     *
     * This section of code contains the main loop.
     * It provides options to add daily expenses, view a summary report, and exit the program.
     */
    while (1)
    {
        /*
         * Display user the menu and prompt for selection
         */
        system("cls");
        printf("=== Student Personal Finance Manager ===\n");
        printf("Monthly income: %2.lf\n", monthlyIncome);
        printf("[1] Add daily expenses\n");
        printf("[2] View summary report\n");
        printf("[3] Exit the program\n");
        printf("Please select an options: ");

        int menuSelection;
        scanf("%d", &menuSelection);
        fflush(stdin);

        switch (abs(menuSelection))
        {
        case 1: // Case user wants to set daily expenses
        {
            /*
             * Daily Expenses Loop
             */
            int DailyExpenses_loop = 1;
            int DailyExpenses_isInvalidInput = 0;
            do
            {
                /*
                 * Prompt user to add daily expenses for any category
                 */
                system("cls");
                printf("=== Student Personal Finance Manager ===\n");

                /* Warn or notify user if depends on the flag */
                double sumOfDailyExpenses = academicDailyExpense + groceriesDailyExpense + rentalDailyExpense + transportationDailyExpense + stationeryDailyExpense + entertainmentDailyExpense;
                if (sumOfDailyExpenses > monthlyIncome)
                {
                    printf("--> Your daily expenses have exceeded your monthly income!\n");
                }
                if (academicDailyExpense > academicExpenseLimit)
                {
                    printf("--> Your academic daily expenses have exceeded the expense limit!\n");
                }
                if (groceriesDailyExpense > groceriesExpenseLimit)
                {
                    printf("--> Your groceries daily expenses have exceeded the expense limit!\n");
                }
                if (rentalDailyExpense > rentalExpenseLimit)
                {
                    printf("--> Your rental daily expenses have exceeded the expense limit!\n");
                }
                if (transportationDailyExpense > transportationExpenseLimit)
                {
                    printf("--> Your transport daily expenses have exceeded the expense limit!\n");
                }
                if (stationeryDailyExpense > stationeryExpenseLimit)
                {
                    printf("--> Your stationery daily expenses have exceeded the expense limit!\n");
                }
                if (entertainmentDailyExpense > entertainmentExpenseLimit)
                {
                    printf("--> Your entertainment daily expenses have exceeded the expense limit!\n");
                }
                if (DailyExpenses_isInvalidInput == 1)
                {
                    printf("--> Your input is invalid, please try again!\n");
                    DailyExpenses_isInvalidInput = 0;
                }
                printf("Monthly income: %2.lf\n", monthlyIncome);
                printf("Please enter your daily expense.\n");
                printf("[1] Academics (%.2lf/%.2lf): \n", academicDailyExpense, academicExpenseLimit);
                printf("[2] Groceries (%.2lf/%.2lf): \n", groceriesDailyExpense, groceriesExpenseLimit);
                printf("[3] Rental (%.2lf/%.2lf): \n", rentalDailyExpense, rentalExpenseLimit);
                printf("[4] Transportation (%.2lf/%.2lf): \n", transportationDailyExpense, transportationExpenseLimit);
                printf("[5] Stationery (%.2lf/%.2lf): \n", stationeryDailyExpense, stationeryExpenseLimit);
                printf("[6] Entertainment (%.2lf/%.2lf): \n", entertainmentDailyExpense, entertainmentExpenseLimit);
                printf("[7] Exit\n");
                printf("Please select an option: ");

                int categorySelection;
                scanf("%d", &categorySelection);
                fflush(stdin);

                /*
                 * Math every cases from 1 - 7,
                 * If it matches a category of expense, add the daily expense
                 * If 7 is selected, set the loop condition flag to 0
                 * else, mark the input as invalid value.
                 */
                double dailyExpense;
                switch (abs(categorySelection))
                {
                case 1:
                    printf("Add daily expense for Academic: ");
                    scanf("%lf", &dailyExpense);
                    fflush(stdin);
                    academicDailyExpense += fabs(dailyExpense);
                    break;
                case 2:
                    printf("Daily expense for Groceries: ");
                    scanf("%lf", &dailyExpense);
                    fflush(stdin);
                    groceriesDailyExpense += fabs(dailyExpense);
                    break;
                case 3:
                    printf("Daily expense for Rental: ");
                    scanf("%lf", &dailyExpense);
                    fflush(stdin);
                    rentalDailyExpense += fabs(dailyExpense);
                    break;
                case 4:
                    printf("Daily expense for Transportation: ");
                    scanf("%lf", &dailyExpense);
                    fflush(stdin);
                    transportationDailyExpense += fabs(dailyExpense);
                    break;
                case 5:
                    printf("Daily expense for Stationery: ");
                    scanf("%lf", &dailyExpense);
                    fflush(stdin);
                    stationeryDailyExpense += fabs(dailyExpense);
                    break;
                case 6:
                    printf("Daily expense for Entertainment: ");
                    scanf("%lf", &dailyExpense);
                    fflush(stdin);
                    entertainmentDailyExpense += fabs(dailyExpense);
                    break;
                case 7:
                    DailyExpenses_loop = 0;
                    break;
                default:
                    DailyExpenses_isInvalidInput = 1;
                    break;
                }

                if (DailyExpenses_isInvalidInput == 1)
                {
                    DailyExpenses_loop = 1;
                }
            } while (DailyExpenses_loop == 1);

            break;
        }
        case 2:
        {
            /*
             * If user wants to view summary report
             */
            system("cls");
            printf("=============== Summary Report =============== \n");
            printf("Sub-total of Expenses: \n");

            /* Display each category of expense */
            printf("Academic \t\t%10.2lf\n", academicDailyExpense);
            printf("Groceries \t\t%10.2lf\n", groceriesDailyExpense);
            printf("Rental \t\t\t%10.2lf\n", rentalDailyExpense);
            printf("Transportation \t\t%10.2lf\n", transportationDailyExpense);
            printf("Stationery \t\t%10.2lf\n", stationeryDailyExpense);
            printf("Entertainment \t\t%10.2lf\n", entertainmentDailyExpense);

            /* Calculate and display the sum of daily expenses and remaining balance */
            double sumOfDailyExpenses = academicDailyExpense + groceriesDailyExpense + rentalDailyExpense + transportationDailyExpense + stationeryDailyExpense + entertainmentDailyExpense;
            double remainingBalance = monthlyIncome - sumOfDailyExpenses;
            printf("----------------------------------------------\n");
            printf("Total Expenses \t\t%10.2lf\n", sumOfDailyExpenses);
            printf("Remaining Balance \t%10.2lf\n", remainingBalance);
            printf("----------------------------------------------\n");
            printf("Press 'Enter' to exit from the report.\n");

            /* This section is pause the program so user can view the summary report */
            char key;
            scanf("%c", &key);
            fflush(stdin);

            break;
        }
        case 3:
            /* Exit if user selected 3 */
            exit(0);
            break;

        default:
            break;
        }
    }

    return 0;
}