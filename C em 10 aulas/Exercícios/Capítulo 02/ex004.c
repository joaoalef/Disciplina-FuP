#include <stdio.h>

// Faça um programa que leia um número e informe se ele é ou não divisível por 5.

int main(){
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    int divisivel = n % 5 == 0;

    if(divisivel)
        printf("Divisível por 5");
    
    else
        printf("Não é divisível por 5");

    return 0;
}