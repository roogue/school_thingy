#include <stdio.h>

int main()
{
    int array[10];
    int *ptr = array;

    for(int i = 0; i < 10; i++) {
        printf("Enter a value for array[%d]: ", i);
        scanf("%d", ptr + i); 
    }

    
    for(int i = 9; i >= 0; i--) {
        printf("The value for array[%d] is %d\n", i, ptr[i]); 
    }

    return 0;
}