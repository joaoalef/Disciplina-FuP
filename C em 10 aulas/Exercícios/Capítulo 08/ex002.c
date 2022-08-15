#include <stdio.h>

// Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.

int soma(int n){
    if(n > 1)
        return n + soma(n-1);
    else
        return 1;
}

void main(){
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("\nA soma dos números entre 1 e %d é: %d", n, soma(n));
}