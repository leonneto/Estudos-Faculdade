#include <stdio.h>

// Escreva um algoritmo que leia dois números inteiros, dividendo e divisor, respectivamente,
// e imprima o valor do "dividendo =", do "divisor =", do "quociente =" e do "resto =" da divisão.

int main() {
    int dividendo,divisor,quociente,resto;

    printf("Digite o dividendo (número a ser dividido): ");
    scanf("%i", &dividendo);

    printf("Digite o divisor (número que irá dividir): ");
    scanf("%i", &divisor);

    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    printf("Dividendo = %i\n", dividendo);
    printf("Divisor = %i\n", divisor);
    printf("Quociente = %i\n", quociente);
    printf("Resto = %i\n", resto);

    return 0;
}
