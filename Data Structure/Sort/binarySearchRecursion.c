#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int start, int end, int item)
{
    int mid;
    if (end >= start)
    {
        mid = (start + end) / 2;
        if (arr[mid] == item)
        {
            return mid + 1;
        }
        else if (arr[mid] < item)
        {
            return binarySearch(arr, mid + 1, end, item);
        }
        else
        {
            return binarySearch(arr, start, mid - 1, item);
        }
    }
    return -1;
}

void main()
{
    int arr[10];
    int item, pos = -1;
    printf("Enter 10 elements for the array in ascending order\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the item which you want to search\n");
    scanf("%d", &item);
    pos = binarySearch(arr, 0, 9, item);
    if (pos != -1)
    {
        printf("Item \'%d\' found at position \'%d\',index \'%d\'\n", item, pos, pos + 1);
    }
    else
    {
        printf("Item not found\n");
    }
}