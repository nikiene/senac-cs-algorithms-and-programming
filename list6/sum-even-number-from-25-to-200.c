// Write a program that calculates the sum of all even numbers from 25 to 200.
#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 25; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    printf("The sum of all even numbers from 25 to 200 is %d\n", sum);

    return 0;
}