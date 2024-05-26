/**
 * Write a program that asks the user for 3 numbers from 1 to 60.
 * The program will then continuously draw 3 numbers from 1 to 60 until the 3 tens entered by the user are drawn.
 * In the end, it should display how many draws were made.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number1, number2, number3;
    int draw1, draw2, draw3;
    int draws = 0;

    printf("Enter 3 numbers from 1 to 60:\n");
    scanf("%d %d %d", &number1, &number2, &number3);

    srand(time(NULL));

    while (1)
    {
        do
        {
            draw1 = rand() % 60 + 1;
            draw2 = rand() % 60 + 1;
            draw3 = rand() % 60 + 1;
        } while (draw1 == draw2 || draw1 == draw3 || draw2 == draw3);

        draws++;

        if (draw1 == number1 && draw2 == number2 && draw3 == number3)
        {
            break;
        }
    }

    printf("It took %d draws to get the numbers %d, %d and %d\n", draws, number1, number2, number3);

    return 0;
}