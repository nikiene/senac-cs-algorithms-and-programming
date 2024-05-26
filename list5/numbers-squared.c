// Write a program that displays the square of all numbers from 1 to 20.
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        printf("%d² = %d\n", i, i * i);
    }

    return 0;
}