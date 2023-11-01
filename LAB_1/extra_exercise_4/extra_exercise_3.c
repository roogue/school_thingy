#include <stdio.h>

int main()
{
    char name[20];
    printf("Please enter your name: ");
    scanf("%20[^\n]", &name); // %s 

    printf("\n");
    printf("Hi %s! nice to meet you!", name);

    return 0;
}
