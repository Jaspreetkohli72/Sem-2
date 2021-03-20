#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int rollNo;
    char name[20], DOB[10], addr[10];
};

int main()
{
    struct student s1;
    s1.rollNo = 1;
    strcpy(s1.name, "Jaspreet");
    strcpy(s1.DOB, "09/09/2001");
    strcpy(s1.addr, "Katroa Talab");
    printf("Roll number = %d\n", s1.rollNo);
    printf("Student name = %s\n", s1.name);
    printf("Date of birth = %s\n ", s1.DOB);
    printf("Address = %s\n", s1.addr);
}