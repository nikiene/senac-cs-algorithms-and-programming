// Write a program that asks the user for a number, and then displays all its dividers.
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d is a divider of %d\n", i, number);
        }
    }

    return 0;
}