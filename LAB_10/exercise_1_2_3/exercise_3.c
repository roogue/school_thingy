#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[50], program[10];
    int matric;

    FILE *file;

    while (1)
    {

        printf("Enter request\n");
        printf("1) List students with IS program\n");
        printf("2) List students with MC program\n");
        printf("3) List students with SE program\n");
        printf("4) End of run\n");
        printf("? ");

        int choice;
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // You can turn this into a function for readability but i am lazy
            file = fopen("student.dat", "r");

            fscanf(file, "%s %d %s", name, &matric, program);

            while (!feof(file))
            {
                if (strcmp(program, "IS") == 0)
                {
                    printf("%s %d %s\n", name, matric, program);
                }
                fscanf(file, "%s %d %s", name, &matric, program);
            }

            fclose(file);

            break;
        case 2:

            file = fopen("student.dat", "r");

            fscanf(file, "%s %d %s", name, &matric, program);

            while (!feof(file))
            {
                if (strcmp(program, "MC") == 0)
                {
                    printf("%s %d %s\n", name, matric, program);
                }
                fscanf(file, "%s %d %s", name, &matric, program);
            }

            fclose(file);

            break;
        case 3:

            file = fopen("student.dat", "r");

            fscanf(file, "%s %d %s", name, &matric, program);

            while (!feof(file))
            {
                if (strcmp(program, "SE") == 0)
                {
                    printf("%s %d %s\n", name, matric, program);
                }
                fscanf(file, "%s %d %s", name, &matric, program);
            }

            fclose(file);

            break;
        case 4:
            exit(0);
            break;
        }
    }
}