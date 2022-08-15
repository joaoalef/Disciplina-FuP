#include <stdio.h>

/*
Elabore um programa que leia um valor do tipo inteiro e, por meio de função,
atualize todas as posições de um vetor com o número inteiro lido, depois imprima os valores.
Utilize ponteiros para as operações.
*/

int att(int *vetor, int num, int tam){
    int *p;

    for(int i=0; i<tam; i++){
        p = &vetor[i];
        *p = num;
    }
}

void main(){
    int vetor[10];
    int num;
    int *p;

    printf("Digite um valor para o inteiro: ");
    scanf("%d", &num);

    att(vetor, num, 10);

    for(int i=0; i<10; i++){
        p = &vetor[i];
        printf("%d", *p);
    }
}