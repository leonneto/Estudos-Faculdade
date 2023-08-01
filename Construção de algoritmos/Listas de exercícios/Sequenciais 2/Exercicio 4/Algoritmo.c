#include <stdio.h>

/*
Escreva um algoritmo que receba duas variáveis inteiras A e B e efetue a troca dos valores,
de forma que a variável A passe a ter o valor da variável B e vice-versa.
Ao final, seu algoritmo deverá apresentar os valores trocados.
*/

int main() {
    int A, B, temp;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    temp = A;
    A = B;
    B = temp;

    printf("Valores trocados:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
