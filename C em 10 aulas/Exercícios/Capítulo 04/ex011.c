#include <stdio.h>
#include <limits.h>

/*
Construa um programa que leia dados para um vetor de 100 elementos inteiros.
Imprimir o maior e o menor, sem ordenar, o percentual de números pares e a
média dos elementos do vetor
*/

int main(){
    int vet[100];
    int maior = INT_MIN;
    int menor = INT_MAX;
    float percent_pares = 0;
    float media = 0;

    Printf("Digite os 100 valores: ");
    for(int i=0; i<100; i++){
        scanf("%d", &vet[i]);

        media += vet[i];

        if(vet[i] % 2 == 0) percent_pares++;

        if(vet[i] > maior) maior = vet[i];

        if(vet[i] < menor) menor = vet[i];
    }

    percent_pares = (percent_pares * 100.0) / 100.0;

    media = media / 100.0;

    printf("\nMaior valor: %d", maior);
    printf("\nMenor valor: %d", menor);
    printf("\nPercentual de números pares: %f", percent_pares);
    printf("\nMédia dos elementos do vetor: %f", media);

    return 0;
}