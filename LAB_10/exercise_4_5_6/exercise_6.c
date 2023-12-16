#include <stdio.h>

int main()
{
    struct Student
    {
        int num;
        int ITP;
        int DM;
        int SAD;
    } student;

    FILE *file;
    file = fopen("Marks.bin", "rb");

    while (1)
    {
        printf("Enter Student No. to display [0 to quit]: ");
        int choice;
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }

        fseek(file, (choice - 1) * sizeof(struct Student), SEEK_SET);

        fread(&student, sizeof(struct Student), 1, file);
        printf("Student No.%d >>> ITP: %d \t DM: %d \t SAD: %d\n", student.num, student.ITP, student.DM, student.SAD);
    }

    fclose(file);

    return 0;
}