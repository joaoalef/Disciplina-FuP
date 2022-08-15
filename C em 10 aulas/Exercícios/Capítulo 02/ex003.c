#include <stdio.h>

/*
Faça um programa que leia um número e imprima uma das duas mensagens:
"É múltiplo de 3" ou "Não é múltiplo de 3"
*/

int main(){
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    int multiplo = n % 3 == 0;
    
    if(multiplo)
        printf("Múltiplo de 3");
    
    else
        printf("Não é múltiplo de 3");
    
    return 0;
}