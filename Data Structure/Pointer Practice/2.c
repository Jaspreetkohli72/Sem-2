#include <stdio.h>
#include <stdlib.h>

void main()
{
    int c = 5;
    int *p = &c;

    printf("%d", *p);
}