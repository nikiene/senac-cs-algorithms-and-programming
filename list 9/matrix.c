// Write a 3x3 matrix of integers, associate the value 8 with the central element of this matrix. Display the matrix on the screen properly.
#include <stdio.h>

int main()
{
    int matrix[3][3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matrix[i][j] = 0;
        }
    }

    matrix[1][1] = 8;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}