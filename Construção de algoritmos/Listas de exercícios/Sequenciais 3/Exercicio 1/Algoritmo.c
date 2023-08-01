#include <stdio.h>
/*
A taxa de produtos importados (também conhecida como alíquota) é de 60% do valor total da compra.
 Para definir o valor da alíquota é necessário converter o valor da compra, paga em dólar, para a 
 moeda corrente (R$). Sabendo que a cotação atual do dólar é de R$ 5.31, ou seja, 1 dólar americano equivale 
 a 5.31 reais. Escreva um algoritmo que receba o valor da compra de um usuário e:

a)    Calcule e apresente o valor da compra em reais (conversão de dólar para real);
b)    Calcule e apresente o valor da taxa de produtos (alíquota);
c)     Calcule a apresente o valor da taxa de produtos caso a alíquota seja atualizada para 30% do valor
 total da compra;
*/
int main()
{
    float valorDolar,valorReais;
    float taxa60, taxa30;
    float cotacaoDolar = 5.31;

        printf("Digite o valor da compra em dolares:\n");
        scanf("%f", &valorDolar);

        valorReais = valorDolar * cotacaoDolar;
        taxa60 = valorReais * 0.6;
        taxa30 = valorDolar * 0.3;

        printf("Valor da compra em reais: R$ %.2f\n", valorReais);
        printf("Taxa de produtos (aliquota de 60%%): R$ %.2f\n", taxa60);
        printf("Taxa de produtos (aliquota de 30%%): R$ %.2f\n", taxa30);


        return 0;

}