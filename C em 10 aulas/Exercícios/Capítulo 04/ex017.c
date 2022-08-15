#include <stdio.h>

/*
Faça um programa que leia um conjunto de 30 valores inteiros,
armazene-os em um vetor e os imprima ao contrário da ordem de leitura.
*/

int main(){
    int vet[30];

    printf("Digite os 30 valores:\n");
    for(int i = 0; i < 30; i++) scanf("%d", &vet[i]);

    printf("\nConjunto ao contrario:\n");
    for(int i = 29; i >= 0; i--) printf("%d\n", vet[i]);

    return 0;
}