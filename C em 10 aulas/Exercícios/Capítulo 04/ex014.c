#include <stdio.h>
#include <math.h>

/*
Faça um programa que armazene 50 números inteiros em um vetor.
O programa deve gerar e imprimir um segundo vetor em que cada elemento é o quadrado do elemento do primeiro vetor.
*/

int main(){
    int vet1[5];
    int vet2[5];

    printf("Digite 50 valores para o vetor:\n");
    for(int i=0; i<5; i++) scanf("%d", &vet1[i]);

    printf("\n---Quadrado dos 50 valores do vetor---");
    for(int i=0; i<5; i++){
        vet2[i] = pow(vet1[i], 2);

        printf("\nQuadrado de %d: %d", vet1[i], vet2[i]);
    }

    return 0;
}