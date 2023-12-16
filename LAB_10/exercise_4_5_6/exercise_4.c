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
    file = fopen("Marks.bin", "wb");

    for (int i = 0; i < 4; i++)
    {

        students[i].num = i + 1;

        printf("Student %d - ITP: ", i + 1);
        scanf("%d", &students[i].ITP);
        fflush(stdin);
        printf("Student %d - DM: ", i + 1);
        scanf("%d", &students[i].DM);
        fflush(stdin);
        printf("Student %d - SAD: ", i + 1);
        scanf("%d", &students[i].SAD);
        fflush(stdin);
    }

    fwrite(students, sizeof(struct Student), 4, file);

    printf("Data saved");

    return 0;
}