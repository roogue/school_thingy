#include <stdio.h>

int main()
{
    char first;
    char *rest[50];
    printf("Enter your name: ");
    scanf("%c%s", &first, rest);

    printf("The character is %c and the remaining string is %s\n", first, rest);

    return 0;
}