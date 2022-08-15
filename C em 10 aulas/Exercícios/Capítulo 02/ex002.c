#include <stdio.h>

/*
Faça um programa em C que leia dois valores inteiros e efetue a adição.
Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8,
caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.
*/

int main(){
    int n1, n2;
    int soma;

    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    if(soma > 20){
        soma = soma + 8;
        printf("%d", soma);
    }

    else{
        soma = soma - 5;
        printf("%d", soma);
    }
    
    return 0;
}