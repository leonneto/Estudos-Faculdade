#include <stdio.h>

int main() {
    const float salarioMinimo = 1212.00;
    float valorPorQuilowatt, quantidadeQuilowatts, valorFinal, valorComDesconto, valorComMulta;

    printf("Digite a quantidade de quilowatts gasta pela residencia: ");
    scanf("%f", &quantidadeQuilowatts);

    valorPorQuilowatt = 0.05 * salarioMinimo / 100;
    valorFinal = quantidadeQuilowatts * valorPorQuilowatt;
    valorComDesconto = valorFinal * 0.9;
    valorComMulta = valorFinal * 1.15;

    printf("a) O valor em reais pago por cada quilowatt: R$ %.2f\n", valorPorQuilowatt);
    printf("b) O valor final a ser pago: R$ %.2f\n", valorFinal);
    printf("c) O valor com desconto de 10%%: R$ %.2f\n", valorComDesconto);
    printf("d) O valor com multa de 15%% em caso de atraso: R$ %.2f\n", valorComMulta);

    return 0;
}
