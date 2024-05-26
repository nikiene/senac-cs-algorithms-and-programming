// Write a program that receives 5 integers and displays the smallest.
#include <stdio.h>

int main()
{
    int number, smallest;
    int i = 0;

    while (i < 5)
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (i == 0 || number < smallest)
        {
            smallest = number;
        }

        i++;
    }

    printf("The smallest number is %d\n", smallest);

    return 0;
}