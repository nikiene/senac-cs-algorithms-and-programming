// Write a program that reads 5 numbers and displays the ones that are above the average.
#include <stdio.h>

int main()
{
    int numbers[5];
    int i;
    int sum = 0;
    float average;

    for (i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = sum / 5.0;

    for (i = 0; i < 5; i++)
    {
        if (numbers[i] > average)
        {
            printf("%d\n", numbers[i]);
        }
    }

    return 0;
}