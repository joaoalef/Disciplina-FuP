#include <stdio.h>

// Faça um programa em C que leia três números inteiros e imprima os três em ordem crescente

int main(){
    int n1;
    int n2;
    int n3;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    if(n1 < n2 && n1 < n3){
        if(n2 < n3)
            printf("\nOrdem crescente: %d, %d, %d", n1, n2, n3);
        else
            printf("\nOrdem crescente: %d, %d, %d", n1, n3, n2);
    }

    else if(n2 < n1 && n2 < n3){
        if(n1 < n3)
            printf("\nOrdem crescente: %d, %d, %d", n2, n1, n3);
        else
            printf("\nOrdem crescente: %d, %d, %d", n2, n3, n1);
    }

    else if(n3 < n1 && n3 < n2){
        if(n1 < n2)
            printf("\nOrdem crescente: %d, %d, %d", n3, n1, n2);
        else
            printf("\nOrdem crescente: %d, %d, %d", n3, n2, n1);
    }

    return 0;
}