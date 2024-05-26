// Write a program that creates and fills the same vector of 100 numbers. Calculate the sum of all numbers that are below the average of the last 10.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vector[100];
    int i, sum = 0;
    float average = 0;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        vector[i] = rand() % 100;
    }

    for (i = 90; i < 100; i++)
    {
        average += vector[i];
    }

    average /= 10;

    for (i = 0; i < 100; i++)
    {
        if (vector[i] < average)
        {
            sum += vector[i];
        }
    }

    printf("Sum of numbers below the average of the last 10: %d\n", sum);

    return 0;
}