// Write a program that asks the user to enter an integer and prints the square of that integer.
#include <stdio.h>

int main(void)
{
    int value, squared;

    printf("Type in the value: ");
    scanf("%d", &value);

    squared = value * value;
    printf("Result: %d", squared);

    return 0;
}