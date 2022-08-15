#include <stdio.h>

/*
Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se
o valor da compra for menor que R$20,00, caso contrário, o lucro será de 30%.
Faça um programa em C que leia o valor do produto e imprima o valor da venda.
*/

int main(){
    float produto;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    if(produto < 20){
        produto = produto + produto * 0.45;
        printf("O preço de venda do produto é igual a: R$%.2f", produto);
    }else{
        produto = produto + produto * 0.30;
        printf("O preço de venda do produto é igual a: R$%.2f", produto);
    }

    return 0;
}