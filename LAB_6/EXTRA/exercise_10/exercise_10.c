#include <stdio.h>

#define STUDENT_NUM 4
#define SUBJECT_NUM 3

void convertMarks(float convertedMarks[STUDENT_NUM][SUBJECT_NUM], int allStudentsMarks[STUDENT_NUM][SUBJECT_NUM], float subjectWeightages[SUBJECT_NUM], int numOfStudents, int numOfSubject)
{
    for (int i = 0; i < numOfStudents; i++)
    {
        for (int j = 0; j < numOfSubject; j++)
        {
            convertedMarks[i][j] = allStudentsMarks[i][j] * subjectWeightages[j];
        }
    }
}

int main()
{
    int allStudentsMarks[STUDENT_NUM][SUBJECT_NUM];
    float subjectWeightages[SUBJECT_NUM] = {0.3, 0.5, 0.2};
    float convertedMarks[STUDENT_NUM][SUBJECT_NUM];

    for (int i = 0; i < STUDENT_NUM; i++)
    {
        for (int j = 0; j < SUBJECT_NUM; j++)
        {
            printf("Marks for student %d, subject %d: ", i + 1, j + 1);
            scanf("%d", &allStudentsMarks[i][j]);
        }
    }

    convertMarks(convertedMarks, allStudentsMarks, subjectWeightages, STUDENT_NUM, SUBJECT_NUM);
    for (int i = 0; i < STUDENT_NUM; i++)
    {
        for (int j = 0; j < SUBJECT_NUM; j++)
        {
            printf("Converted marks for student %d, subject %d: %.2f\n", i + 1, j + 1, convertedMarks[i][j]);
        }
    }

    return 0;
}