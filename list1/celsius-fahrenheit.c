// Write a program that converts temperatures from Celsius to Fahrenheit.
#include <stdio.h>

int main(void)
{
    float celsius, fahrenheit;

    printf("Type in the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 9 / 5 + 32;
    printf("Temperature in Fahrenheit: %.1f", fahrenheit);

    return 0;
}