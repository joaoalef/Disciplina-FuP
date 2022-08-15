#include <stdio.h>

//Faça um programa em C que leia um número real e imprima 1/4 deste número.

int main(){
    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    n = n / 4;

    printf("\n1/4 desse número equivale a: %.2f", n);

    return 0;
}