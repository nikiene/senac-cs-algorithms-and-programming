// Write a program that asks the user to enter a number between 10 and 20. If an invalid number is entered, ask again until a correct number is entered.
#include <stdio.h>

int main()
{
    int number;

    do
    {
        printf("Enter a number between 10 and 20: ");
        scanf("%d", &number);
    } while (number < 10 || number > 20);

    return 0;
}