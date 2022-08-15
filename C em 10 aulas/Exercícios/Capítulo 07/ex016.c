#include <stdio.h>
#include <math.h>

/*
Construa um programa que leia um valor inteiro e retorne se a raiz desse número é exata ou não.
Escreva uma função para fazer a validação. Ao final imprima o resultado.
*/

int raiz(int n){
    float raiz = sqrt(n);
    int aux = raiz;

    if(raiz - aux > 0)
        return 1;
    else
        return 0;
}

void main(){
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    if(raiz(n) == 1)
        printf("\nA raiz deste número não é exata.");
    else
        printf("\nA raiz deste número é exata.");
}