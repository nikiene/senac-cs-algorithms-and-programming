// Write a program that displays the sum of the numbers from 1 to 100
#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }

    printf("The sum of the numbers from 1 to 100 is %d\n", sum);

    return 0;
}