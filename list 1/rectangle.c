/**
 * Write a program that asks the user to type the two dimensions of a rectangle and prints the perimeter and the area of that rectangle.
 * The program should print both answers in a single printf.
 */
#include <stdio.h>

int main(void)
{
    float width, height, perimeter, area;

    printf("Type in the width: ");
    scanf("%f", &width);

    printf("Type in the height: ");
    scanf("%f", &height);

    perimeter = 2 * (width + height);
    area = width * height;

    printf("Perimeter: %.2f, Area: %.2f", perimeter, area);

    return 0;
}