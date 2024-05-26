/**
 * Write a program that displays any complete multiplication table.
 * The program should ask the user which multiplication table he wants to view, who will respond by entering a number from 1 to 10.
 */
#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number from 1 to 10: ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}