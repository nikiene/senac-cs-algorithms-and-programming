// Write an algorithm that receives a number and shows a message if this number is greater than 10.
#include <stdio.h>

int main(void)
{
    int number;

    printf("Type in an integer: ");
    scanf("%d", &number);

    if (number > 10)
    {
        printf("The number is greater than 10.");
    }

    return 0;
}