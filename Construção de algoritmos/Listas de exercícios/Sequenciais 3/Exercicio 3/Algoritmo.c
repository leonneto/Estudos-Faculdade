#include <stdio.h>

/*
O restaurante Brocados é muito famoso por seus hambúrgueres. Sabendo que cada hambúrguer possui 200g de carne
, escreva um algoritmo que receba a quantidade de hambúrgueres para um determinado dia e apresente a quantidade em quilos de carne
 necessária para a sua produção.
*/

int main(){
    float cadaHamburguer = 0.2, quantidadeQuilos,quantidadeHamburguers;

    printf("Digite a quantidade de hamburgueres para um determinado dia:\n");
    scanf("%f", &quantidadeHamburguers);

     quantidadeQuilos = quantidadeHamburguers * cadaHamburguer;

    printf("Quantidade de carne necessaria: %.2f kg\n", quantidadeQuilos);

    return 0;
}