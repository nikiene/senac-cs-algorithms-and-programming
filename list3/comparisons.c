/**
 * Write a program that asks the user for an integer. Display an error message if the number is between 15 and 25 or between 45 and 50 (inclusive).
 * Write a program that asks for a number that displays the message "SENAC" if this number is 13, 26, 42 or 70.
 */
#include <stdio.h>

int main(void)
{
    int number;

    printf("Type in an integer: ");
    scanf("%d", &number);

    if ((number >= 15 && number <= 25) || (number >= 45 && number <= 50))
    {
        printf("Error: the number is between 15 and 25 or between 45 and 50.");
    }
    else if (number == 13 || number == 26 || number == 42 || number == 70)
    {
        printf("SENAC");
    }

    return 0;
}