#include <stdio.h>

/*
O metro quadrado de um terreno possui, em média, o preço de R$ 5.000 na cidade de Corumbá. 
Escreva um algoritmo para ler as dimensões de um terreno, apresentar sua dimensão e o seu preço médio.
*/

int main(){
    float largura,altura, metroQuadrado = 5000, area, ValorMedio;

        printf("Digite a largura do terreno:\n");
        scanf("%f", &largura);

        printf("Digite a altura do terreno:\n");
        scanf("%f", &altura);

    area = largura * altura;
    ValorMedio = area * metroQuadrado;

         printf("Dimensao do terreno: %.2f metros x %.2f metros\n", largura, altura);
         printf("Preço médio do terreno: R$ %.2f\n", ValorMedio);
   
    return 0;


}