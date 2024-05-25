/**
 * Write a program that draws a number from 1 to 10 and gives the user two chances to get it right.
 * Write a program that draws a number from 1 to 10, gives the user two chances to get it right, but informs if the drawn number is greater or less than the first guess.
 * Write the same program as before, now with 3 guesses.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;
    srand(time(NULL));
    number = rand() % 10 + 1;

    while (attempts < 3)
    {
        printf("Guess the number: ");
        scanf("%d", &guess);

        if (guess == number)
        {
            printf("Congratulations! You guessed the number!\n");
            break;
        }
        else if (guess < number)
        {
            printf("The number is greater than %d\n", guess);
        }
        else
        {
            printf("The number is less than %d\n", guess);
        }

        attempts++;
    }

    if (attempts == 3)
    {
        printf("You lost! The number was %d\n", number);
    }

    return 0;
}