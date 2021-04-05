#include <Stdio.h>
#include <stdlib.h>

void main()
{
    printf("Enter the elements of the 1st Matrix\n");
    int arr[3][3], arr1[3][3], sumArr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the elements of 2nd Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sumArr[i][j] = arr[i][j] + arr1[i][j];
        }
    }
    printf("\nThe Sum of the two Matrix are:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", sumArr[i][j]);
        }
        printf("\n");
    }
}