#include <stdio.h>

int main()
{
    int subjectMarks[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Marks for subject %d: ", i + 1);
        scanf("%d", &subjectMarks[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Marks for subject %d: %d\n", i + 1, subjectMarks[i]);
    }

    int totalMarks = 0;
    for (int i = 0; i < 3; i++)
    {
        totalMarks += subjectMarks[i];  
    }
    printf("Total marks: %d\n", totalMarks);

    printf("Average marks: %.2f", totalMarks / 3.0);

    return 0;
}