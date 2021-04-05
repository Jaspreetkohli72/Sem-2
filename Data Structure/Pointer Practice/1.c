#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *pc, c;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);

    pc = &c;
    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc %p\n", *pc);

    c = 11;
    printf("Address of pointer pc: %p\n", pc);
    printf("Value of pointer pc: %d\n\n", *pc);

    *pc = 2;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);
}