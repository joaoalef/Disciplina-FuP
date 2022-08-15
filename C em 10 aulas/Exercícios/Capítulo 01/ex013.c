#include <stdio.h>

/*
Faça um programa em C que leia o saldo de uma conta poupança e imprima o
novo saldo, considerando um reajuste de 2%
*/

int main(){
    float saldo;
    
    printf("Digite seu saldo: ");
    scanf("%f", &saldo);

    saldo = saldo + saldo * 0.25;

    printf("Seu novo saldo com um reajuste de 25%% é igual a: R$%.2f", saldo);

    return 0;
}