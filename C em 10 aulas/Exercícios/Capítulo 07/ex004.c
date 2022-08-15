#include <stdio.h>

/*
Faça um programa que calcule e imprima o fatorial de um número,
usando uma função que receba um valor e retorne o fatorial desse valor.
*/

int fat(int n){
    int fat = 1;
    if(n == 0 || n == 1)
        return fat;
    else
        for(int i = 2; i <= n; i++)
            fat *= i;
            
        return fat;
}

void main(){
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("\nO fatorial desse número é: %d", fat(n));
}