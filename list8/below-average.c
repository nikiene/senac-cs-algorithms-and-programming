// Write a program that creates and fills the same vector of 100 numbers. Calculate the sum of all numbers that are below the average of the last 10.
#include <stdio.h>

int main()
{
    int vector[100];
    int i;
    int sum = 0;
    float average;
    int lastTenSum = 0;
    float lastTenAverage;

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

    return 0;
}