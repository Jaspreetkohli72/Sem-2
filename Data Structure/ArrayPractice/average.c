//find the average of 10 numbers using arary
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[10], sum = 0;
    float avg;
    printf("Enter the elements of the array\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / 10.0;
    printf("\n%f", avg);
}
