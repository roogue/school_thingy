#include <stdio.h>

int main()
{
    printf("Enter the name, matric, and program\n");
    printf("Enter EOF to end input");

    char name[50], program[10];
    int matric;

    FILE *file;
    file = fopen("student.dat", "w"); // I'm lazy to check if the file is open-able or not so..
    printf("\n");

    printf("? ");
    scanf("%s%d%s", name, &matric, program);
    while (!feof(stdin))
    {
        fprintf(file, "%s %d %s\n", name, matric, program);
        printf("? ");
        scanf("%s%d%s", name, &matric, program);
    }

    fclose(file);
}