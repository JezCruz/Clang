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

    answer = firstNumber - secondNumber;

    printf("%d minus %d is %d\n", firstNumber, secondNumber, answer);

    return 0;
}