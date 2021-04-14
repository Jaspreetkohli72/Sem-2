#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[5] = {1, 3, 5, 7, 8}, item = 5, n = 5, j = 0;
    printf("The original elements of array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
    while (j < n)
    {
        if (arr[j] == item)
        {
            break;
        }
        j++;
    }
    printf("\nFound item '%d' at position %d\n", item, j + 1);
}
