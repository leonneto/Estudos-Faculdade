#include <stdio.h>
#include <math.h>

// Escreva um algoritmo que receba o raio de um círculo e imprima o perímetro, área e diâmetro.

int main() {
    float raio, perimetro, area, diametro;
    const float pi = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    perimetro = 2 * pi * raio;
    area = pi * raio * raio;
    diametro = 2 * raio;

    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);
    printf("Diametro: %.2f\n", diametro);

    return 0;
}
            