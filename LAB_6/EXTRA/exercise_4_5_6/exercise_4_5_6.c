#include <stdio.h>

int main()
{
    int allStudentsMarks[4][3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Marks for student %d, subject %d: ", i + 1, j + 1);
            scanf("%d", &allStudentsMarks[i][j]);
        }
    }

    int totalMarks = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            totalMarks += allStudentsMarks[i][j];
        }
    }
    printf("Total marks: %d\n", totalMarks);

    printf("Average marks: %.2f\n", totalMarks / 12.0);

    return 0;
}