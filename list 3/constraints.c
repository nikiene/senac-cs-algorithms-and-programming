// Write a program that asks the user for a number and displays a message if this number is greater than 80, less than 25 or equal to 40.
#include <stdio.h>

int main(void)
{
    int number;

    printf("Type in an integer: ");
    scanf("%d", &number);

    if (number > 80 || number < 25 || number == 40)
    {
        printf("The number is greater than 80, less than 25 or equal to 40.");
    }

    return 0;
}