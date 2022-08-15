#include <stdio.h>

/*
Faça um programa que leia um número e imprima uma das mensagens:
"Maior do que 20", "Igual a 20"ou "Menor do que 20".
*/

int main(){
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    int maior20 = n > 20;
    int menor20 = n < 20;

    if(maior20)
        printf("Maior que 20");
    
    else if(menor20)
        printf("Menor que 20");

    else
        printf("Igual a 20");

    return 0;
}