#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Your age is %d\n", age);

    float height;

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Your height is %.1f\n", height);
    
    return 0;
}