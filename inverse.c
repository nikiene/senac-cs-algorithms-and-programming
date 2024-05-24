/**
 * Write a program that asks the user to enter an integer and prints its inverse.
 */
#include <stdio.h>

int main(void)
{
    int number;

    printf("Type in an integer: ");
    scanf("%d", &number);

    printf("Inverse: %d", -number);

    return 0;
}