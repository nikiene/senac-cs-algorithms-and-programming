/**
 * Write a program that creates a 10x10 matrix of characters and fills it with spaces. Assign a character "O" to element 5,5.
 * The program should ask the user to enter one of the following commands:
 * 1 - up, 2 - down, 3 - left, 4 - right, 5 - exit.
 * The direction commands make the character "O" move through the matrix.
 * The program should repeat until the user enters 5.
 */
#include <stdio.h>

int main()
{
    char matrix[10][10];
    int i, j, x = 5, y = 5;
    char command;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matrix[i][j] = ' ';
        }
    }

    matrix[x][y] = 'O';

    do
    {
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                printf("%c ", matrix[i][j]);
            }
            printf("\n");
        }

        printf("Enter a command: ");
        scanf(" %c", &command);

        switch (command)
        {
        case '1':
            if (x > 0)
            {
                matrix[x][y] = ' ';
                x--;
                matrix[x][y] = 'O';
            }
            break;
        case '2':
            if (x < 9)
            {
                matrix[x][y] = ' ';
                x++;
                matrix[x][y] = 'O';
            }
            break;
        case '3':
            if (y > 0)
            {
                matrix[x][y] = ' ';
                y--;
                matrix[x][y] = 'O';
            }
            break;
        case '4':
            if (y < 9)
            {
                matrix[x][y] = ' ';
                y++;
                matrix[x][y] = 'O';
            }
            break;
        }

    } while (command != '5');

    return 0;
}