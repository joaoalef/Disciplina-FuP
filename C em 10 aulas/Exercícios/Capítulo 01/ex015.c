#include <stdio.h>

/*
Faça um programa em C que leia o valor de um produto, o percentual do desconto desejado
e imprima o valor do desconto e o valor do produto subtraindo o desconto
*/

int main(){
    float valor;
    int desconto;

    printf("Qual valor atual do produto? ");
    scanf("%f", &valor);
    printf("Qual a porcentagem de desconto desejado? ");
    scanf("%d", &desconto);

    valor = valor - valor * (desconto / 100.0);

    printf("\nO produto, com %d%% de desconto, terá como valor: R$%.2f", desconto, valor);

    return 0;
}