/**
 * Write a program that asks the user to type two integers and prints the quotient and the remainder of the integer division of these integers.
 * The program should print both answers in a single printf. You can assume that the user will not try to divide by zero.
 */

#include <stdio.h>

int main(void)
{

    int value1, value2;
    float quotient, remainder;

    printf("Type in the first value: ");
    scanf("%d", &value1);

    printf("Type in the second value: ");
    scanf("%d", &value2);

    quotient = value1 / value2;
    remainder = value1 % value2;

    printf("Quotient: %.2f, Remainder: %.2f", quotient, remainder);

    return 0;
}