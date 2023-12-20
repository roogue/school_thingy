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

    int highestStudentTotalMarks = 0;
    int studentId;
    for (int i = 0; i < 4; i++)
    {
        int totalMarksByStudent = 0;
        for (int j = 0; j < 3; j++)
        {
            totalMarksByStudent += allStudentsMarks[i][j];
        }

        if (totalMarksByStudent > highestStudentTotalMarks)
        {
            highestStudentTotalMarks = totalMarksByStudent;
            studentId = i + 1;
        }
    }
    printf("The highest mark against these students is %d by student %d\n", highestStudentTotalMarks, studentId);

    int highestAverageMarksOfSubject = 0;
    int subjectId;
    for (int i = 0; i < 3; i++)
    {
        int totalMarks = 0;
        for (int j = 0; j < 4; j++)
        {
            totalMarks += allStudentsMarks[j][i];
        }

        float totalAverageMarks = totalMarks / 4;
        if (totalAverageMarks > highestAverageMarksOfSubject)
        {
            highestAverageMarksOfSubject = totalAverageMarks;
            subjectId = i + 1;
        }
    }
    printf("The highest average marks of subject against these students is %d by subject %d\n", highestAverageMarksOfSubject, subjectId);

    for (int i = 0; i < 4; i++)
    {
        int totalMarks = 0;
        for (int j = 0; j < 3; j++)
        {
            totalMarks += allStudentsMarks[i][j];
        }

        float averageMarks = totalMarks / 3;

        if (averageMarks >= 80)
        {
            printf("Student %d -> Grade A\n", i + 1);
        }
        else if (averageMarks >= 60)
        {
            printf("Student %d -> Grade B\n", i + 1);
        }
        else if (averageMarks >= 40)
        {
            printf("Student %d -> Grade C\n", i + 1);
        }
        else
        {
            printf("Student %d -> Grade D\n", i + 1);
        }
    }
    return 0;
}
