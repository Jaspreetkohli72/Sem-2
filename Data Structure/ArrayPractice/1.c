#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[5];
    printf("Enter 5 integers\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Displaying intergers\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
}