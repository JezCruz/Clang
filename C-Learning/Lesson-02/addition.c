#include <stdio.h>

int main(void)
{
    int firstNumber;
    int secondNumber;
    int answer;

    printf("Enter your first Number: ");
    scanf("%d", &firstNumber);

    printf("Enter your second Number: ");
    scanf("%d", &secondNumber);

    answer = firstNumber + secondNumber;

    printf("The sum of %d and %d is %d\n", firstNumber, secondNumber, answer);

    return 0;
}