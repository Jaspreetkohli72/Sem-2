#include <stdio.h>
#include <stdlib.h>

void main()
{

    int city = 2, week = 7, temp[city][week];
    for (int i = 0; i < city; i++)
    {
        for (int j = 0; j < week; j++)
        {
            printf("City %d, Day %d: ", i + 1, j + 1);
            scanf("%d", &temp[i][j]);
        }
    }
    printf("\n*********Displaying values*********\n");

    for (int i = 0; i < city; i++)
    {
        for (int j = 0; j < week; j++)
        {
            printf("City %d, Day %d = %d\n", i + 1, j + 1, temp[i][j]);
        }
    }
}