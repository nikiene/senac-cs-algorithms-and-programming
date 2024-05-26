// Write a program that creates a vector of 10 positions and inserts the number 8 in all positions.
#include <stdio.h>

int main()
{
    int vector[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        vector[i] = 8;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", vector[i]);
    }

    return 0;
}