#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[5] = {1, 3, 5, 7, 8}, k = 3, n = 5, j;
    printf("The original elements of array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
    j = k;
    while (j < n)
    {
        arr[j - 1] = arr[j];
        j++;
    }
    n--;
    printf("The array elements after deletion are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}