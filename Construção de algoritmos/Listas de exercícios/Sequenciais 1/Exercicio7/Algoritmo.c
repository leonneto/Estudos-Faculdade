#include <stdio.h>
#include <math.h>

// Escreva um algoritmo que receba o lado de um quadrado e imprima o perímetro, área e diagonal.

int main() {
    float lado, perimetro, area, diagonal;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    perimetro = 4 * lado;
    area = lado * lado;
    diagonal = lado * sqrt(2);

    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}
