// Write a program that draws two numbers from 1 to 5 and asks the user to get both numbers, not necessarily in the same order.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int number1, number2, guess1, guess2;

    srand(time(NULL));
    number1 = rand() % 5 + 1;
    number2 = rand() % 5 + 1;

    printf("Type in the first number from 1 to 5: ");
    scanf("%d", &guess1);
    printf("Type in the second number from 1 to 5: ");
    scanf("%d", &guess2);

    if ((guess1 == number1 && guess2 == number2) || (guess1 == number2 && guess2 == number1))
    {
        printf("Congratulations! You got both numbers right.");
    }
    else
    {
        printf("You lost. The drawn numbers were %d and %d.", number1, number2);
    }

    return 0;
}