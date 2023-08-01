#include <stdio.h>

/*
Astrogilda tem um cofre onde guardou, durante todo ano, moedas de R$ 0.25, R$ 0.50 e R$ 1.00. 
Escreva um algoritmo que receba a quantidade que Astrogilda possui de cada uma dessas moedas e 
apresente o valor total que ela possui.
*/
int main(){

	float moeda1=0.25, moeda2=0.50, moeda3=1, total;
	float quant1, quant2,quant3;
	
	
	printf("Escreva o numero de moedas de 25 centavos:");
	scanf("%f", &quant1);

	printf("Escreva o numero de moedas de 50 centavos:");
	scanf("%f", &quant2);

	printf("Escreva o numero de moedas de 1 real:");
	scanf("%f", &quant3);
	
	total=  (moeda1*quant1)+ (moeda2*quant2)+ (moeda3*quant3);

	printf("Esse sera o o valor total que ela possui.: %2.f", total);

    return 0;

}