#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **studentsMarksG1;
    int **studentsMarksG2;

    int studentNumG1;
    int studentNumG2;
    printf("Num of student in G1: ");
    scanf("%d", &studentNumG1);
    printf("Num of student in G2: ");
    scanf("%d", &studentNumG2);

    int commonSubjectNum;
    printf("Num of common subject: ");
    scanf("%d", &commonSubjectNum);

    studentsMarksG1 = (int **)malloc(studentNumG1 * sizeof(int));
    for (int i = 0; i < studentNumG1; i++)
    {
        studentsMarksG1[i] = (int *)malloc(commonSubjectNum * sizeof(int));
    }
    studentsMarksG2 = (int **)malloc(studentNumG2 * sizeof(int));
    for (int i = 0; i < studentNumG2; i++)
    {
        studentsMarksG2[i] = (int *)malloc(commonSubjectNum * sizeof(int));
    }

    printf("Enter marks for Group 1:\n");
    for (int i = 0; i < studentNumG1; i++)
    {
        for (int j = 0; j < commonSubjectNum; j++)
        {
            printf("Student %d, subject %d: ", i + 1, j + 1);
            scanf("%d", &studentsMarksG1[i][j]);
        }   
    }
    printf("Enter marks for Group 2:\n");
    for (int i = 0; i < studentNumG2; i++)
    {
        for (int j = 0; j < commonSubjectNum; j++)
        {
            printf("Student %d, subject %d: ", i + 1, j + 1);
            scanf("%d", &studentsMarksG2[i][j]);
        }
    }

    printf("\nThe marks of all students: \n");
    printf("Group 1:\n");
    for (int i = 0; i < studentNumG1; i++)
    {
        for (int j = 0; j < commonSubjectNum; j++)
        {
            printf("Student %d, subject %d: %d\n", i + 1, j + 1, studentsMarksG1[i][j]);
        }
    }
    printf("Group 2:\n");
    for (int i = 0; i < studentNumG1; i++)
    {
        for (int j = 0; j < commonSubjectNum; j++)
        {
            printf("Student %d, subject %d: %d\n", i + 1, j + 1, studentsMarksG2[i][j]);
        }
    }

    return 0;
}