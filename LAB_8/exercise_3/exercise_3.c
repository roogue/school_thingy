#include <stdio.h>

int main()
{
    char text[100];
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    printf("The line printed in reverse order is: ");

    char *ch;
    ch = &text[0];

    int i = 0;

    while (*ch != '\0')
    {
        ch++;
        i++;
    }

    for (i; i >= 0; i--)
    {
        printf("%c", text[i]);
    }

    return 0;
}