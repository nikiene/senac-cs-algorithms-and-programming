// Write a program that creates a vector of 100 positions, fills it with random numbers from 1 to 100. Display the average of these.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vector[100];
    int i;
    int sum = 0;
    float average;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        vector[i] = rand() % 100 + 1;
        sum += vector[i];
    }

    average = sum / 100.0;

    printf("Average: %.2f\n", average);

    return 0;
}