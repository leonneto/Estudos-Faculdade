#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//A prefeitura municipal de Corumb� est� realizando um mutir�o de limpeza de terrenos pela cidade e para isso contratou uma empresa terceirizada. 
//Sabendo que essa empresa cobra o valor de R$ 22.50 para cada metro quadrado de terreno limpo acrescido de um imposto de 
//10%. Escreva um algoritmo que receba as dimens�es de um terreno e apresente seu tamanho e o valor que ser� cobrado pela sua limpeza.


int main()
{
	
	float base, altura, imposto= 0.1, valor=22.5, dimensao, ValorCobrado, ValorCImposto;
	

	printf("Escreva o valor da base do terreno \n");
	scanf("%f", &base);

	printf("Escreva o valor da altura do terreno \n");
	scanf("%f", &altura);
	
	
	dimensao= base*altura;
	ValorCobrado= dimensao*valor;
	ValorCImposto= ValorCobrado*1.1;
	
	
	printf("Esse sera o valor da sua dimensao: %2.f. \n", dimensao);
	printf("Esse sera o valor que ser� cobrado pela sua limpeza: %f \n", ValorCobrado);
	printf("Esse sera o valor cobrado com imposto: %.2f \n", ValorCImposto);
	
	
	
		
}


