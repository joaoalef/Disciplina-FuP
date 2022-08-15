#include <stdio.h>

// Faça um programa em C que leia um número e indique se o número está compreendido entre 20 e 50 ou não.

int main(){
    float n;

    printf("Digite um número: ");
    scanf("%f", &n);

    float compreendido = n > 20 && n < 50;

    if(compreendido)
        printf("O número está compreendido entre 20 e 50");
    
    else
        printf("O número não está compreendido entre 20 e 50");
    
    return 0;
}
