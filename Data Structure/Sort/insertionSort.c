#include <stdio.h>
#include <stdlib.h>
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

void main()
{
    int dataArr[5] = {9, 5, 1, 4, 3};
    int size = sizeof(dataArr) / sizeof(dataArr[0]);
    insertionSort(dataArr, size);
    printf("Sorted array in ascending order\n");
    printArray(dataArr, size);
}