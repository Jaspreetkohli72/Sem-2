#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Error! meory not allocated");
        exit(0);
    }
    printf("Enter elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d, pointer = %d\n", sum, ptr);
    free(ptr);
}