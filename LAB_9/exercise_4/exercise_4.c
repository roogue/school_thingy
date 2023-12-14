#include <stdio.h>

struct Student
{
    char name[50];
    char faculty[50];
    float gpa;
    int student_id;
};

void printRecord(struct Student *student)
{
    printf("%s %s %f %d \n", student->name, student->faculty, student->gpa, student->student_id);
}

int main()
{

    struct Student student1 = {"Mohammad", "FCSHD", 3.89, 55555};
    struct Student student2 = {"Susanne", "FSTS", 3.55, 22222};

    printRecord(&student1);
    printRecord(&student2);

    return 0;
}