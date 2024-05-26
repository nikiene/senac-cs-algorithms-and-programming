/**
 * Write a program that requests the code and height of 5 athletes.
 * At the end of the data entry, inform the HEIGHT of the tallest athlete.
 * Write a program that requests the code and height of 5 athletes.
 * At the end of the data entry, inform the CODE of the tallest athlete.
 * Also inform the average height of these 5 athletes.
 * Do not restrict data entry to only 5 athletes.
 * Now after including each athlete the program should ask the user if they want to include another.
 * The answer is given with (0/1). The program continues to show the CODE of the tallest, and the average height.
 */
#include <stdio.h>

int main()
{
    int code, tallest_code, include_another;
    float height, tallest_height, average_height, sum_height;
    int athletes = 0;

    do
    {
        printf("Enter the athlete's code: ");
        scanf("%d", &code);
        printf("Enter the athlete's height: ");
        scanf("%f", &height);

        if (athletes == 0 || height > tallest_height)
        {
            tallest_code = code;
            tallest_height = height;
        }

        sum_height += height;
        athletes++;

        printf("Do you want to include another athlete? (0/1): ");
        while (1)
        {
            printf("Do you want to include another athlete? (0/1): ");
            scanf("%d", &include_another);
            if (include_another == 0 || include_another == 1)
            {
                break;
            }
        }
    } while (include_another == '1');

    average_height = sum_height / athletes;

    printf("The tallest athlete is %d with %.2f meters\n", tallest_code, tallest_height);
    printf("The average height of the athletes is %.2f meters\n", average_height);

    return 0;
}