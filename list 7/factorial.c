// Write a program that asks for a number and then displays the factorial of this number.
#include <stdio.h>

int main()
{
    int number;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 2; i <= number; i++)
    {
        factorial *= i;
    }

    printf("The factorial of %d is %d\n", number, factorial);

    return 0;
}