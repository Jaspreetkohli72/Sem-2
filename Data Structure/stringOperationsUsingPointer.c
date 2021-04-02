#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char aa[100], bb[100];
    char *a = aa;
    char *b = bb;
    printf("\nEnter the first string: ");
    gets(aa);
    printf("\nEnter the second string to be concatenated: ");
    gets(bb);
    while (*a)
    {
        a++;
    }
    while (*b)
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';
    printf("\n\n\nThe string after concatenation is: %s ", aa);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
}
