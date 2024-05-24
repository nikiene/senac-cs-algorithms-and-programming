/**
 * Write a program that draws a number from 1 to 10 and gives the user two chances to get it right.
 * Write a program that draws a number from 1 to 10, gives the user two chances to get it right, but informs if the drawn number is greater or less than the first guess.
 * Do the same previous program, now with 3 guesses.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int number, guess, attempts = 0;

    srand(time(NULL));
    number = rand() % 10 + 1;

    while (attempts < 3)
    {
        printf("Type in a number from 1 to 10: ");
        scanf("%d", &guess);

        if (guess == number)
        {
            printf("Congratulations! You got it right.");
            break;
        }
        else if (guess < number)
        {
            printf("The drawn number is greater than your guess.\n");
        }
        else
        {
            printf("The drawn number is less than your guess.\n");
        }

        attempts++;
    }

    if (attempts == 3)
    {
        printf("You lost. The drawn number was %d.", number);
    }

    return 0;
}