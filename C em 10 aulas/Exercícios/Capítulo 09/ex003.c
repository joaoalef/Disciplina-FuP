#include <stdio.h>

/*
Crie um programa que contenha um vetor de inteiros com tamanho 5.
Utilizando apenas ponteiros, leia valores e armazene neste vetor e após isso,
imprima o dobro de cada valor lido.
*/

void main(){
    int v[5];
    int *p;

    printf("Digite o valor de 5 valores:\n");
    for(int i=0; i<5; i++){
        p = &v[i];
        scanf("%d", p);
    }

    printf("\nO dobro dos valores digitados:\n");
    for(int i=0; i<5; i++){
        p = &v[i];
        printf("%d\n", *p * 2);
    }
}