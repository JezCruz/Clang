#include <stdio.h>

int main(void)
{
    char name[] = "Jezreel James";
    int age = 23;
    char course[] = "BSIT"; 
    char section = 'A';
    int year = 1;

    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Course/Section: %s - %d%c",course,year,section);

    return 0;
}