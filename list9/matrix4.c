// Utilizing the same matrix, display the sum of the elements of the main diagonal.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matrix[20][20];
    int i, j;
    int sum, highestSum = 0;
    int highestSumRow = 0;
    int diagonalSum = 0;

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

        diagonalSum += matrix[i][i];
    }

    printf("Sum of the main diagonal elements: %d\n", diagonalSum);
    printf("Row with the highest sum: %d\n", highestSumRow);

    return 0;
}
