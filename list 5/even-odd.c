//  Write a program that asks the user for 5 numbers, and for each number entered, informs whether it is even or odd.
#include <stdio.h>

int main()
{
    int number;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number % 2 == 0)
        {
            printf("%d is even.\n", number);
        }
        else
        {
            printf("%d is odd.\n", number);
        }
    }

    return 0;
}