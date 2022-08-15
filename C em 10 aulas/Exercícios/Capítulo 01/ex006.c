#include <stdio.h>

// Faça um programa em C que leia um número inteiro e imprima o seu antecessor e o seu sucessor.

int main(){
    int n, ante, suce;
    scanf("%d", &n);

    ante = n - 1;
    suce = n + 1;

    printf("Antecessor: %d", ante);
    printf("\nSucessor: %d", suce);

    return 0;
}