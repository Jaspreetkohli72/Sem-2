#include <stdio.h>
#include <stdlib.h>

void push(char elem, char stack[], int *top, int size)
{
    if (*top == -1)
    {
        stack[size - 1] = elem;
        *top = size - 1;
    }
    else if (*top == 0)
    {
        printf("The stack is full. \n");
    }
    else
    {
        stack[(*top) - 1] = elem;
        (*top)--;
    }
}

void main()
{
    int size = 4;
    char str[size];
    str[0] = 'H';
    str[1] = 'e';
    str[2] = 'l';
    printf("Before\n");
    puts(str);
    int top = -1;
    push('a', str, &top, size);
    printf("After \n");
    puts(str);
}