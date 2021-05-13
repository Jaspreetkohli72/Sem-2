#include <stdio.h>
#include <stdlib.h>

int peek(int arr[], int top)
{
    return arr[top];
}

void main()
{
    int arr[3] = {0, 1, 2}, top = 2;
    printf("%d", peek(arr, top));
}