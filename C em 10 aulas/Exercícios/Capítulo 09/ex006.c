#include <stdio.h>
#include <limits.h>

/*
Construa uma função que, recebendo como parâmetros quatro números inteiros,
devolva ao módulo que o chamou os dois maiores números dentre os quatro recebidos.
Faça um programa que leia tantos conjuntos de quatro valores quantos o usuário deseje
e que acione a função para cada conjunto de valores, apresentando a cada vez os dois maiores números.
Se preferir, utilize vetor para armazenar o conjunto de valores.
*/

void maiores(int *n, int *maior1, int *maior2){
    for(int i = 0; i < 4; i++)
        if(n[i] >= *maior1)
            *maior1 = n[i];

    for(int i = 0; i < 4; i++)
        if(n[i] >= *maior2 && n[i] <= *maior1 && n[i] != *maior1)
            *maior2 = n[i];
}

void main(){
    int numeros[4];
    int maior1 = INT_MIN;
    int maior2 = INT_MIN;

    for(
    ){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maiores(numeros, &maior1, &maior2);

    printf("\nOs dois maiores números são: %d e %d", maior1, maior2);
}