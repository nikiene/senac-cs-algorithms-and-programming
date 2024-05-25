// Write a program that requests 10 numbers and at the end displays the sum of all of them.
#include <stdio.h>

int main()
{
    int number, sum = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        sum += number;
    }

    printf("The sum of all numbers is %d.\n", sum);

    return 0;
}