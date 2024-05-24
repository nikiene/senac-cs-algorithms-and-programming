// Write a program that asks the user to enter a number. Then inform if this number is even or odd.
#include <stdio.h>

int main(void)
{
    int number;

    printf("Type in an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }

    return 0;
}