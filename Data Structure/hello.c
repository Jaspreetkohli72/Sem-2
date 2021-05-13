#include <stdio.h>
#include <stdlib.h>

int rec(int num)
{
    return (num) ? num % 10 + rec(num / 10) : 0;
}

void main()
{
    printf("%d", rec(4567));
}