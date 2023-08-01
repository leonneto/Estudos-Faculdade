#include <stdio.h>
// Escreva um algoritmo que receba um número real e imprima o “número”, o “quadrado” e a “raiz quadrada” desse número.

int main(){
    float x, raiz, quadrado;
        printf("Digite um numero real:\n");
        scanf("%f", &x);

        quadrado = x*x;
        raiz = x*0.5;

        printf("Numero digitado: %.2f\n", x );
        printf("Quadrado do numero: %.2f\n", quadrado);
        printf("Raiz do numero: %.2f\n", raiz);


        return 0;
}