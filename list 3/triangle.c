// 3 - Escrever um algoritmo que leia três valores inteiros e verifique se eles podem ser as medidas dos lados de um triângulo.
// Propriedade: o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados.
// 4 - Incremente o exercício anterior, para o caso das medidas formarem um triângulo válido , informar qual o tipo de triângulo que eles formam: equilátero, isósceles ou escaleno.
// 5 -  Incremente o exercício anterior, agora informando se este é também um triângulo retângulo.

/**
 * Write an algorithm that reads three integer values and checks if they can be the measures of the sides of a triangle.
 * Property: the length of each side of a triangle is less than the sum of the lengths of the other two sides.
 * Increment the previous exercise, in case the measures form a valid triangle, inform which type of triangle they form: equilateral, isosceles or scalene.
 * Increment the previous exercise, now informing if this is also a right triangle.
 */
#include <stdio.h>

int main(void)
{
    int side1, side2, side3;

    printf("Type in the first side: ");
    scanf("%d", &side1);

    printf("Type in the second side: ");
    scanf("%d", &side2);

    printf("Type in the third side: ");
    scanf("%d", &side3);

    if (side1 < side2 + side3 && side2 < side1 + side3 && side3 < side1 + side2)
    {
        if (side1 == side2 && side2 == side3)
        {
            printf("The sides form an equilateral triangle.");
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3)
        {
            printf("The sides form an isosceles triangle.");
        }
        else
        {
            printf("The sides form a scalene triangle.");
        }

        if (side1 * side1 == side2 * side2 + side3 * side3 || side2 * side2 == side1 * side1 + side3 * side3 || side3 * side3 == side1 * side1 + side2 * side2)
        {
            printf(" The sides form a right triangle.");
        }
    }
    else
    {
        printf("The sides do not form a triangle.");
    }

    return 0;
}