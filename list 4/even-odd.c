// Write a program that plays even or odd with the user.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int number, computer, sum;

    srand(time(NULL));
    computer = rand() % 10 + 1;

    printf("Type in an integer: ");
    scanf("%d", &number);

    sum = number + computer;

    printf("You chose %d and the computer chose %d. The sum is %d.\n", number, computer, sum);

    if (sum % 2 == 0)
    {
        printf("The sum is even.");
    }
    else
    {
        printf("The sum is odd.");
    }

    return 0;
}