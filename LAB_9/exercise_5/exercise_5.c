#include <stdio.h>

struct Student
{
    char name[50];
    char faculty[50];
    float gpa;
    int student_id;
};

void printRecord(struct Student student)
{
    printf("%s %s %f %d \n", student.name, student.faculty, student.gpa, student.student_id);
}

int main()
{
    struct Student student[2] = {{"Mohammad", "FCSHD", 3.89, 55555}, {"Susanne", "FSTS", 3.55, 22222}};

    for (int i = 0; i < 2; i++)
    {
        printRecord(student[i]);
    }

    return 0;
}