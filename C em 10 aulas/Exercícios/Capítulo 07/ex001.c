#include <stdio.h>

/*
Faça um programa em C que leia três números e, para cada um, imprimir o dobro.
O cálculo deverá ser realizado por uma função e o resultado impresso ao final do programa.
*/

int dobro(int n){
    return n * 2;
}

void main(){
    int n1, n2, n3;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    printf("\nO dobro do primeiro número é: %d", dobro(n1));
    printf("\nO dobro do segundo número é: %d", dobro(n2));
    printf("\nO dobro do terceiro número é: %d", dobro(n3));
}