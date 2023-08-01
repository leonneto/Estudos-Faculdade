#include <stdio.h>
/*
Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar as vendas oferecendo descontos em 
seus produtos. Escreva um algoritmo que receba o valor do produto e que, calcule e imprima o novo valor 
com desconto de 10% para pagamentos no dinheiro e de 5% para pagamentos no cartão.
*/
int main() {
    float valorProduto, valorComDescontoDinheiro, valorComDescontoCartao;
    const float descontoDinheiro = 0.10;
    const float descontoCartao = 0.05;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    valorComDescontoDinheiro = valorProduto - (valorProduto * descontoDinheiro);
    valorComDescontoCartao = valorProduto - (valorProduto * descontoCartao);

    printf("Novo valor com desconto para pagamento em dinheiro: R$ %.2f\n", valorComDescontoDinheiro);
    printf("Novo valor com desconto para pagamento no cartao: R$ %.2f\n", valorComDescontoCartao);

    return 0;
}
