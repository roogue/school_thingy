#include <stdio.h>
int main()
{
    int n[5]; /* n is an array of 5 integers */
    int i, j;
    /* initialize elements of array n */
    for (i = 0; i < 5; i++)
    {
        n[i] = i;
    }
    /* output each array element's value */
    for (j = 4; j >= 0; j--)
    {
        printf("Element n[%d] = %d\n", j, n[j]);
    }
    return 0;
}