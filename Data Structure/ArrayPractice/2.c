#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[5] = {1, 2, 3, 4, 5}, *ptr;
    ptr = &arr[2];
    printf("*ptr = %d \n", *ptr);
    printf("*(ptr+1) = %d \n", *(ptr + 1));
    printf("*(ptr-1) = %d \n", *(ptr - 1));
}