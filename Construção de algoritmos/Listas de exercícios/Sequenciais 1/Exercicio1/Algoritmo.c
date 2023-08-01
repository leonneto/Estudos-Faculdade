#include <stdio.h>
// Escreva um algoritmo que leia uma variável inteira X e imprima seu sucessor e seu antecessor.

int main(){
    int x,suc,ant;
        printf("Digite um valor inteiro:\n");
        scanf("%i", &x);

        suc = x + 1;
        ant = x - 1;

        printf("Numero digitado: %i\n",x);
        printf("Sucessor: %i\n",suc);
        printf("Antecessor: %i\n",ant);

            return 0;


}