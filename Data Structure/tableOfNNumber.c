#include <stdio.h>
#include <stdlib.h>

void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
}
void main()
{
    int n;
    printf("Enter the number you want the table of \n");
    scanf("%d", &n);
    table(n);
}