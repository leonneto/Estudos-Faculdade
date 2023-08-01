#include <stdio.h>
#include <math.h>

// Escreva um algoritmo que receba a base e a altura de um retângulo e imprima o perímetro, área e diagonal.

int main() {
    float base, altura, perimetro, area, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);
    area = base * altura;
    diagonal = sqrt(base * base + altura * altura);

    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}
