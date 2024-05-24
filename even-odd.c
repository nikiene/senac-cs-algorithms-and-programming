/**
 * Write a program that asks the user to enter an integer and prints only one number: 0 or 1.
 */
#include <stdio.h>

int main(void)
{
    int number;

    printf("Type in an integer: ");
    scanf("%d", &number);

    printf("%d", number % 2);

    return 0;
}