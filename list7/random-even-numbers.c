// Write a program that draws 10 even numbers between 1 and 100 and displays them on the screen. (how to ensure that the draw displays only even numbers?)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i = 0;
    int number;

    srand(time(NULL));

    while (i < 10)
    {
        number = rand() % 100 + 1;

        if (number % 2 == 0)
        {
            printf("%d\n", number);
            i++;
        }
    }

    return 0;
}