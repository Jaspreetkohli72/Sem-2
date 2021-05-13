#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, arr[10], inp, a, b, c;
    printf("Enter 10 elements (in ascending order): \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to be search: \n");
    scanf("%d", &inp);
    a = 0;
    b = 9;
    c = (a + b) / 2;
    while (a <= b)
    {
        if (arr[c] < inp)
        {
            a = c + 1;
        }
        else if (arr[c] == inp)
        {
            printf("Item \'%d\' found at position \'%d\',index \'%d\'", inp, c + 1, c);
            break;
        }
        else
        {
            b = c - 1;
        }
        c = (a + b) / 2;
    }
    if (a > b)
    {
        printf("Item not found\n");
    }
}