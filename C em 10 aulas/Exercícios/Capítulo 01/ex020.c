#include <stdio.h>

/*
Faça um programa em C que efetue a apresentação do valor da conversão
em real (R$) de um valor lido em dólar (US$).
Para isso, será necessário também ler o valor da cotação do dólar.
*/

int main(){
    float real;
    float dolar;
    float cotacao;

    printf("Digite o valor em real (R$): ");
    scanf("%f", &real);
    printf("Digite o valor da cotação: ");
    scanf("%f", &cotacao);
    
    dolar = real * cotacao;

    printf("Valor em dólares: R$%.2f", dolar);

    return 0;
}