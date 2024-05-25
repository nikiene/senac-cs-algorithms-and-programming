// Write a program that receives integers until the user types 0 and then displays the largest and smallest.
#include <stdio.h>

int main()
{
    int number, largest, smallest;
    int first = 1;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number == 0)
        {
            break;
        }

        if (first)
        {
            largest = number;
            smallest = number;
            first = 0;
        }
        else
        {
            if (number > largest)
            {
                largest = number;
            }
            else if (number < smallest)
            {
                smallest = number;
            }
        }
    }

    printf("The largest number is %d\n", largest);
    printf("The smallest number is %d\n", smallest);

    return 0;
}