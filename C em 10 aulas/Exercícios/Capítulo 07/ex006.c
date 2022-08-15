#include <stdio.h>

/*
Faça um programa que leia o saldo e o % de reajuste de uma aplicação financeira
e imprimir o novo saldo após o reajuste. O cálculo deve ser feito por uma função.
*/

float novo_saldo(float saldo, int reajuste){
    return saldo + (saldo * (reajuste / 100.0));
}

void main(){
    float saldo;
    int reajuste;

    printf("Digite o saldo da conta: ");
    scanf("%f", &saldo);
    printf("Digite a porcentagem de reajuste: ");
    scanf("%d", &reajuste);

    printf("\nApós o reajuste o saldo da conta é: R$%.2f", novo_saldo(saldo, reajuste));
}