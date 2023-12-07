#include <stdio.h>

int main()
{
    int marks[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter mark for marks[%d]: ", i);
        scanf("%d", &marks[i]);
    }

    int sum = 0;
    for (int j = 0; j < 10; j++)
    {
        printf("marks[%d]: %d\n", j, marks[j]);
        sum += marks[j];
    }

    printf("Average: %.2f", sum / 10.0);

    return 0;
}