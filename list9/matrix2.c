/**
 * Write a 10x10 character matrix.
 * Assign the letter "B" to all elements of the matrix.
 * Then assign the character "8" to a random element of the matrix. Display the matrix on the screen.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char matrix[10][10];
    int i, j;
    int randomI, randomJ;

    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matrix[i][j] = 'B';
        }
    }

    randomI = rand() % 10;
    randomJ = rand() % 10;

    matrix[randomI][randomJ] = '8';

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}