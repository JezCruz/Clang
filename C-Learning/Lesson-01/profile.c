#include <stdio.h>

int main(void)

{
    char name[] = "Jez";

    int age = 23;

    char grade = 'A';

    float height = 5.2f;

    printf("=== MY PROFILE ===\n");

    printf("Name: %s\n", name);

    printf("Age: %d\n", age);

    printf("Grade: %c\n", grade);

    printf("Height: %.2f\n", height);

    return 0;
}