#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[5] = {1, 3, 5, 7, 8}, k = 3, n = 5, item = 10;
    printf("The original array elements are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
    arr[k - 1] = item;
    printf("The array elements after updation :\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}