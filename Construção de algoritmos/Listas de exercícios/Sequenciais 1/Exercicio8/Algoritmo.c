#include <stdio.h>

// Escreva um algoritmo que receba a razão de uma PA e o valor do seu primeiro termo e imprima o décimo termo da série.

int main() {
    float razao, primeiro_termo, decimo_termo;

    printf("Digite a razao da PA: ");
    scanf("%f", &razao);

    printf("Digite o primeiro termo da PA: ");
    scanf("%f", &primeiro_termo);


    decimo_termo = primeiro_termo + (10 - 1) * razao;

    printf("Decimo termo da PA: %.2f\n", decimo_termo);

    return 0;
}
