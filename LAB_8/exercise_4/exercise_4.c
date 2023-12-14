#include <stdio.h>
#include <ctype.h>

void properCase(char str[]);

int main()
{
    char string[100];
    printf("Please enter your string: ");
    fgets(string, sizeof(string), stdin);

    properCase(string);

    printf("The proper case for your string is as follows: \n%s", string);

    return 0;
}

void properCase(char str[])
{
    // Uppercase the first character in the string
    str[0] = toupper(str[0]);

    char *ch;
    ch = &str[1]; // Set pointer to the second character in the string

    // Set lowercase to the rest of the characters in the string
    while (*ch != '\0')
    {
        *ch = tolower(*ch);
        ch++;
    }
}