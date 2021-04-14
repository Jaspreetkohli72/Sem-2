#include <stdio.h>
#include <stdlib.h>

void main()
{
    char name[30];
    printf("Enter name: \n");
    fgets(name, sizeof(name), stdin);
    //gets(name); Functions the same
    printf("Name: ");
    puts(name);
}