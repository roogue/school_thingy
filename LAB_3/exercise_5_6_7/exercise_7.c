#include <stdio.h>

int main()
{
    int num1, num2;
    int product;
    float quotient; // or double

    num1 = 100;
    num2 = 37;

    product = num1 * num2;
    quotient = (float)num1 / num2; // Explicit casting to float

    printf("The product of %d and %d is = %d\n", num1, num2, product);
    printf("The quotient of %d and %d is = %f\n", num1, num2, quotient); //%f for float
}