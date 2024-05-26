/**
 * Write a program that creates and fills the same vector of 100 numbers. Calculate the sum of all numbers that are below the average of the last 10.
 * Write the contents of the vector from the previous exercise on the screen, placing each value next to the previous one (on the same line).
 * If the vector value is a multiple of 10, then insert a line break.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vector[100];
    int i;
    int sum = 0;
    float average;
    int lastTenSum = 0;
    float lastTenAverage;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        vector[i] = rand() % 100 + 1;
        sum += vector[i];
    }

    average = sum / 100.0;

    for (i = 90; i < 100; i++)
    {
        lastTenSum += vector[i];
    }

    lastTenAverage = lastTenSum / 10.0;

    sum = 0;

    for (i = 0; i < 100; i++)
    {
        if (vector[i] < lastTenAverage)
        {
            sum += vector[i];
        }
    }

    printf("Sum of numbers below the average of the last 10: %d\n", sum);

    for (i = 0; i < 100; i++)
    {
        printf("%d ", vector[i]);

        if (vector[i] % 10 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}