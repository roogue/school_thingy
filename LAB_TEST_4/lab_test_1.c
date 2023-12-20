#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrixA[2][2] = {{1, 2}, {3, 4}};

    // Since matrix A is fixed, we can directly print it.
    printf("1st Matrix: \n");
    printf("\t1\t2\n");
    printf("\t3\t4\n");

    int rows, cols;
    do
    {
        printf("Input the rows and columns of 2nd Matrix: ");
        scanf("%d %d", &rows, &cols);
    } while (rows != matrixA[0][1]); // matrix B's row numbers must be same as matrix A's column numbers to perform multiplication

    int matrixB[rows][cols];
    // prompt user to input every elements in matrix B
    printf("Input elements in the second matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element - [%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    int multipliedMatrix[rows][cols];
    // calculate the multiplication of the matrices
    for (int i = 0; i < 2; i++) // for every rows of matrix A
    {
        for (int j = 0; j < cols; j++) // for every cols of matrix B
        {
            multipliedMatrix[i][j] = 0;    // set the value to 0 first to avoid garbage value
            for (int k = 0; k < rows; k++) // for every rows of matrix B
            {
                multipliedMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
            printf("\t%d", multipliedMatrix[i][j]);
        }
        printf("\n");
    }

    // calculate the sum of rows  of multiplied matrix
    for (int i = 0; i < 2; i++)
    {
        int sumOfRow = 0;
        for (int j = 0; j < cols; j++)
        {
            sumOfRow += multipliedMatrix[i][j];
        }
        printf("Sum of row %d is %d\n", i + 1, sumOfRow);
    }

    return 0;
}