// Write an algorithm that reads two distinct integer values and informs which one is greater.
#include <stdio.h>

int main(void)
{
    int number1, number2;

    printf("Type in the first integer: ");
    scanf("%d", &number1);

    printf("Type in the second integer: ");
    scanf("%d", &number2);

    if (number1 > number2)
    {
        printf("The first number is greater than the second.");
    }
    else if (number2 > number1)
    {
        printf("The second number is greater than the first.");
    }
    else
    {
        printf("The numbers are equal.");
    }

    return 0;
}