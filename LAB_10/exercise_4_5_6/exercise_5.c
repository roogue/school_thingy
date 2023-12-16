#include <stdio.h>

int main()
{
    struct Student
    {
        int num;
        int ITP;
        int DM;
        int SAD;
    } students[4];

    FILE *file;
    file = fopen("Marks.bin", "rb");

    fread(students, sizeof(struct Student), 4, file);

    for (int i = 0; i < 4; i++)
    {
        printf("Student No.%d >>> ITP: %d \t DM: %d \t SAD: %d\n", students[i].num, students[i].ITP, students[i].DM, students[i].SAD);
    }

    printf("Data saved");

    return 0;
}