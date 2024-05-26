/**
 * Write a program that requests the weight and height values of a person, calculates and displays their BMI (Body Mass Index)
 */
#include <stdio.h>

int main(void)
{
    float weight, height, bmi;

    printf("Type in the weight (kg): ");
    scanf("%f", &weight);

    printf("Type in the height (m): ");
    scanf("%f", &height);

    bmi = weight / (height * height);
    printf("BMI: %.2f", bmi);

    return 0;
}