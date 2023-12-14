#include <stdio.h>

int main()
{
    struct Student
    {
        char name[50];
        char faculty[50];
        float gpa;
        int student_id;
    };

    struct Student student1 = {"Mohammad", "FCSHD", 3.89, 55555};
    struct Student student2 = {"Susanne", "FSTS", 3.55, 22222};

    printf("%s %s %f %d \n", student1.name, student1.faculty, student1.gpa, student1.student_id);
    printf("%s %s %f %d", student2.name, student2.faculty, student2.gpa, student2.student_id);

    return 0;
}