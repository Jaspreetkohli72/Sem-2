#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (int i = step + 1; i < size; i++)
        {
            if (arr[i] < arr[min_idx])
                min_idx = i;
        }
        swap(&arr[min_idx], &arr[step]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int dataArr[5] = {20, 12, 10, 15, 2};
    int size = sizeof(dataArr) / sizeof(dataArr[0]);
    selectionSort(dataArr, size);
    printf("Sorted array in Acsending Order:\n");
    printArray(dataArr, size);
}