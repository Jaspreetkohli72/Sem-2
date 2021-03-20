//To print square of n number of integers

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter the number of integers you want to get the square of.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements you want the square of\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("***OUTPUT***\n");
    for (int j = 0; j < n; j++)
    {
        arr[j] *= arr[j];
        printf("%d\n", arr[j]);
    }
}