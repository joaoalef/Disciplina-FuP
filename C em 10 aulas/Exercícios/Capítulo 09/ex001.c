#include <stdio.h>

// Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço

void main(){
    int a;
    int b;

    if(&a >= &b)
        printf("%d", &a);
    else
        printf("%d", &b);
}