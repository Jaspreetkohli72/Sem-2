//greatest common divisor

#include <stdio.h>
#include <stdlib.h>

int mod(int a, int b)
{
    if (b != 0)
    {
        return mod(b, a % b);
    }
    else
    {
        return a;
    }
}

void main()
{
    int a, b, res;
    printf("Enter the value for a\n");
    scanf("%d", &a);
    printf("Enter the value for b\n");
    scanf("%d", &b);
    res = mod(a, b);
    printf("The GCD of %d and %d is %d", a, b, res);
}