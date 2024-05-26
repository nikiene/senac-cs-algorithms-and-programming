// Write a program that asks the user to type two integers and prints the sum of these integers.
#include <stdio.h>

int main(void)
{

    int value1, value2, sum;

    printf("Type in the first value: ");
    scanf("%d", &value1);

    printf("Type in the second value: ");
    scanf("%d", &value2);

    sum = value1 + value2;
    printf("Result: %d", sum);

    return 0;
}