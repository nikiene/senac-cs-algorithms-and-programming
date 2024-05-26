// Write a program that asks the user to enter two integers and prints them in ascending order.
#include <stdio.h>

int main(void)
{
    int number1, number2;

    printf("Type in the first integer: ");
    scanf("%d", &number1);

    printf("Type in the second integer: ");
    scanf("%d", &number2);

    if (number1 < number2)
    {
        printf("%d %d", number1, number2);
    }
    else
    {
        printf("%d %d", number2, number1);
    }

    return 0;
}