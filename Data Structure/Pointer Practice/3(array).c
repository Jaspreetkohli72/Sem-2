#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[4];

    for (int i = 0; i < 4; i++)
    {
        printf("&arr[%d] = %p\n", i, &arr[i]);
    }
    printf("Address of array arr = %p", arr);
}