//  Write a program that receives an integer and informs if this number is a multiple of 10.
#include <stdio.h>

int main(void)
{
    int number;

    printf("Type in an integer: ");
    scanf("%d", &number);

    printf("%d", number % 10 == 0);

    return 0;
}