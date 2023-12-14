#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a character, any character including symbol: ");
    scanf("%c", &ch);

    if (islower(ch)) // check if character is a lowercase letter
    {
        printf("%c is a lowercase letter\n", ch);
    }

    if (isupper(ch)) // check if character is an uppercase letter
    {
        printf("%c is a uppercase letter\n", ch);
    }

    if (isalpha(ch)) // check if character is an alphabetic character
    {
        printf("%c is an alphabetic character\n", ch);
    }

    if (isdigit(ch)) // check if character is a decimal digit
    {
        printf("%c is a decimal digit\n", ch);
    }

    if (isalnum(ch)) // check if character is a alphanumeric character
    {
        printf("%c is a alphanumeric character\n", ch);
    }

    if (isxdigit(ch)) // check if character is a hexadecimal digit
    {
        printf("%c is a hexadecimal digit\n", ch);
    }

    if (ispunct(ch)) // check if character is a punctuation character
    {
        printf("%c is a punctuation character\n", ch);
    }
}