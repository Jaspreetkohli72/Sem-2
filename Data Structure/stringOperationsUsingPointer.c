#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char aa[100], bb[100];
    char *a = aa;
    char *b = bb;
    int ctr = 1;
    printf("Enter the first string: \n");
    gets(aa);
    printf("Enter the second string to be concatenated: \n");
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
        ctr++;
    }
    *a = '\0';
    printf("\nThe string after concatenation is: %s and length is %d", aa, ctr);
}
