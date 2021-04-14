#include <stdio.h>
#include <stdlib.h>

void main()
{
    char name[] = "Jaspreet Singh";
    printf("%c", *name);
    printf("%c", *(name + 1));
    printf("%c", *(name + 7));

    char *namePtr = name;

    printf("\n%c", *namePtr);
    printf("%c", *(namePtr + 1));
    printf("%c", *(namePtr + 7));
}