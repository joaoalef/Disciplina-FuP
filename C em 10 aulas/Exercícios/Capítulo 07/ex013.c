#include <stdio.h>

/*
Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo desconto.
Faça um programa que permita entrar com o valor de um produto e o percentual de desconto
e imprimir o novo valor com base no percentual informado.
Para fazer o cálculo, implemente uma função.
*/

float novo_valor(float p, int d){
    return p - (p * (d / 100.0));
}

void main(){
    float produto;
    int desconto;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);
    printf("Digite o percentual de desconto: ");
    scanf("%d", &desconto);

    printf("\nO novo valor deste produto após o desconte de %d%% é: R$%.2f", desconto, novo_valor(produto, desconto));
}