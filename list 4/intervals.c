// Write a program that draws two numbers from 1 to 10. Inform how many of these numbers are between 3 and 7 (inclusive).
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int number1, number2, count = 0;

    srand(time(NULL));
    number1 = rand() % 10 + 1;
    number2 = rand() % 10 + 1;

    if (number1 >= 3 && number1 <= 7)
    {
        count++;
    }

    if (number2 >= 3 && number2 <= 7)
    {
        count++;
    }

    printf("There are %d numbers between 3 and 7.", count);

    return 0;
}