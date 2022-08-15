#include <stdio.h>

// Faça um programa que leia 3 números e imprima o maior deles.

int main(){
    int n1, n2, n3;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    int maior = n1;

    if(n2 >= maior)
        maior = n2;
    if(n3 >= maior)
        maior = n3;
    
    printf("O maior entre os 3 números é: %d", maior);
    
    return 0;
}