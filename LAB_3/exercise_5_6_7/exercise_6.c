#include <stdio.h>
#include <stdlib.h> // To use the abs() function

int main()
{
    int num1, num2;
    int difference;

    num1 = 20;
    num2 = 40;

    // to avoid a negative result, we find the absolute value of substraction of both nums
    difference = abs(num1 - num2);
    /*
    Alternative way without additional library is:
    if (num1 > num2) {
        difference = num1 - num2;
    } else {
        difference = num2 - num1;
    }
    */

    printf("DIFFERENCE of %d and %d is = %d\n", num1, num2, difference);

    return 0;
}