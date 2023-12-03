#include <stdio.h>

int main()
{
    float x = 1.50001;
    float y = 2.199999;
    char ch1 = 'a';

    printf("Print out x and y with single precision:\n");
    printf("x is %.1f and y is %.1f\n\n", x, y);

    float a = 2.5;
    float b = 3.2;
    char ch2 = 'b';
    float c = 15.0;
    float d = 22.0;
    char ch3 = 'c';
    printf("Print a nice tabular output:\n");
    printf("%10.1f%10.1f%10c\n", x, y, ch1);
    printf("%10.1f%10.1f%10c\n", a, b, ch2);
    printf("%10.1f%10.1f%10c\n", c, d, ch3);

    return 0;
}