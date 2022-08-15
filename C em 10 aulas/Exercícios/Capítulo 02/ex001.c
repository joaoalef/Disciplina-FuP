#include <stdio.h>

/*
Faça um programa em C que leia dois valores numéricos inteiros e efetue a adição,
Caso o resultado seja maior que 10, apresentá-lo.
*/

int main(){
    int n1, n2;
    int soma;

    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    if(soma > 10)
        printf("%d", soma);
    
    return 0;
}