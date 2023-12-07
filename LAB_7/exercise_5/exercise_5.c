#include <stdio.h>

int main()
{
    int array[10];
    int *ptr = array;

    for(int i = 0; i < 10; i++) {
        printf("Enter a value for array[%d]: ", i);
        scanf("%d", ptr + i); // &ptr[i] for array indexing
    }

    
    for(int i = 0; i < 10; i++) {
        printf("The value for array[%d] is %d\n", i, *(ptr + i)); // ptr[i] for array indexing
    }

    return 0;
}