/**
 * Write a 20x20 integer matrix. Fill with random numbers between 10 and 99.
 * Show the sum of the values of all rows of this matrix, and inform which row has the highest value.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matrix[20][20];
    int i, j;
    int sum, highestSum = 0;
    int highestSumRow = 0;

    srand(time(NULL));

    for (i = 0; i < 20; i++)
    {
        sum = 0;

        for (j = 0; j < 20; j++)
        {
            matrix[i][j] = rand() % 90 + 10;
            sum += matrix[i][j];
        }

        if (sum > highestSum)
        {
            highestSum = sum;
            highestSumRow = i;
        }
    }

    for (i = 0; i < 20; i++)
    {
        sum = 0;

        for (j = 0; j < 20; j++)
        {
            sum += matrix[i][j];
        }

        printf("Row %d sum: %d\n", i, sum);
    }

    printf("Row with the highest sum: %d\n", highestSumRow);

    return 0;
}