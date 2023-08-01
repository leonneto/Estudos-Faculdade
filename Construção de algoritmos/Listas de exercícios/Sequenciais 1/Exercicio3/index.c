#include <stdio.h>
// Escreva um algoritmo que leia 4 variáveis reais e imprima a média ponderada entre os valores, 
// sabendo-se que os pesos são respectivamente 1, 2, 3 e 4.

int main(){
    float num1,num2,num3,num4,media;
    float peso1 = 1,peso2 = 2,peso3 = 3,peso4 = 4;

    printf("Digite 4 variaveis reais:\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    scanf("%f", &num4);

    media = (num1 * peso1 + num2 * peso2 + num3 * peso3 + num4 * peso4) / (peso1 + peso2 + peso3 + peso4);

    printf("Media: %.2f", media);



    return 0;
 
}