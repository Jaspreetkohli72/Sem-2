#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i)
    {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }
}