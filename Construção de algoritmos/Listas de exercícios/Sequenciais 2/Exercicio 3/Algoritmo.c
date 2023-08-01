#include <stdio.h>

/*
Crie um algoritmo que receba uma temperatura em graus centígrados e 
imprima sua conversão em graus Fahrenheit. A fórmula para conversão é: F = (9 * C + 160) / 5
*/

int main() {
    float F, C;

    printf("Digite a temperatura em graus centigrados: ");
    scanf("%f", &C);

    F = (9 * C + 160) / 5;

    printf("Valor em graus centigrados: %.2f °C\n", C);
    printf("Valor em graus Fahrenheit: %.2f °F\n", F);

    return 0;
}
