#include <stdio.h>

// Faça um programa em C que leia dois números inteiros e imprima a subtração deles.

int main(){
    int n1, n2, sub;

    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);

    sub = n1 - n2;

    printf("\nA subtração dos dois números é: %d", sub);

    return 0;
}