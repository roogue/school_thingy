#include <stdio.h>

int main()
{

    char name[50], program[10];
    int matric;

    FILE *file;
    file = fopen("student.dat", "r");

    fscanf(file, "%s %d %s", name, &matric, program);
    while (!feof(file))
    {
        printf("%s %d %s\n", name, &matric, program);
        fscanf(file, "%s %d %s", name, &matric, program);
    }
    fclose(file);

    return 0;
}