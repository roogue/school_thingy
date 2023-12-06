#include <stdio.h>

float constantA;
float constantB;

void getConstants();
float calculateX(float A);
float calculateY(float x, float B);
void printResult(float x, float y);

int main()
{
    char cont;
    do
    {
        getConstants();

        float x = calculateX(constantA);

        float y = calculateY(x, constantB);

        printResult(x, y);

        printf("Do you want to calculate another set of values? (Y/N): ");
        fflush(stdin);
        scanf("%c", &cont);
    } while (cont == 'Y' || cont == 'y');

    return 0;
}

void getConstants()
{
    printf("Enter the constant A for the equation 2x = A: ");
    scanf("%f", &constantA);

    printf("Enter the constant B for the equation 3x + y = B: ");
    scanf("%f", &constantB);
}

float calculateX(float A)
{
    float x = A / 2;
    return x;
}

float calculateY(float x, float B)
{
    float y = B - (3 * x);
    return y;
}

void printResult(float x, float y)
{
    printf("\nResults = x: %.2f, y: %.2f\n", x, y);
}