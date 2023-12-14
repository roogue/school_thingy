#include <stdio.h>

int main()
{
    char string[100];
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    char character;
    printf("Enter a character to find its frequency: ");
    scanf("%c", &character);

    int frequency = 0;
    char *ch;
    ch = &string[0];
    while (*ch != '\0')
    {
        if (*ch == character)
        {
            frequency++;
        }
        ch++;
    }

    printf("Frequency of %c = %d", character, frequency);

    return 0;
}