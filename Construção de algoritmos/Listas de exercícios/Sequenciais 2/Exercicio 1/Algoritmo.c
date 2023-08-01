#include <stdio.h>
// Escreva um algoritmo que receba a razão de uma PG (progressão geométrica) e
//  o valor do seu primeiro termo e imprima o sétimo termo da série.
int main(){
    float razao, primeiroTermo,SetimoTermo;

    printf("Digite a razao da PG: ");
    scanf("%f", &razao);

    printf("Digite o primeiro termo da PG: ");
    scanf("%f", &primeiroTermo);

    SetimoTermo = primeiroTermo * pow(razao, 6);

    printf("Setimo termo da PG: %.2f\n", SetimoTermo);

    return 0;

}