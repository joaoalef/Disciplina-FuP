#include <stdio.h>

/*
O dono de uma loja ordenou um reajuste de 4.78% para todos os 15 itens no catalogo.
Sua tarefa é elaborar um programa que leia o valor atual dos produtos e armazene em um vetor,
e após isso efetue o reajuste no valor dos produtos.

OBS: O reajuste deverá ser feito utilizando ponteiros.

Imprima na tela o valor reajustado, usando também ponteiros.
*/

void main(){
    float produtos[3];
    float *p;
    // ENTRADA DE DADOS
    printf("Digite o valor dos produtos:\n\n");
    for(int i = 0; i < 3; i++){
        printf("Digite o valor do %d° produto: ", i + 1);
        scanf("%f", &produtos[i]);
    }

    // REAJUSTE
    for(int i = 0; i < 3; i++){
        p = &produtos[i];
        *p = produtos[i] + (produtos[i] * 0.0478);
    }

    // IMPRIMINDO VALOR APÓS REAJUSTE
    printf("\n---------------------------------------------\n");
    printf("\nValor de cada item após o reajuste:\n\n");
    for(int i = 0; i < 3; i++)
        printf("%d° item: R$%.2f\n", i + 1, produtos[i]);
}