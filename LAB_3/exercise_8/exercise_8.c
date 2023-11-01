#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Prompt for user input
    int num1, num2;
    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Addition
    int sum;
    sum = num1 + num2;
    printf("SUM = %d\n", sum);

    // Subtraction
    int difference;
    difference = abs(num1 - num2);
    printf("DIFFERENCE = %d\n", difference);

    // Product
    int product;
    product = num1 * num2;
    printf("PRODUCT = %d\n", product);

    // Quotient
    float quotient;
    quotient = (float)num1 / num2;
    printf("quotient = %f\n", quotient);

    // Modulus
    int modulus;
    modulus = num1 % num2;
    printf("modulus = %d\n", modulus);

    return 0;
}