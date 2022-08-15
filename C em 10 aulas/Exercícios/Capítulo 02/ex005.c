#include <stdio.h>

// Faça um programa em C que leia um número e informe se ele é divisível por 3 e por 7

int main(){
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    int divisivel3 = n % 3 == 0;
    int divisivel7 = n % 7 == 0;

    if(divisivel3 && divisivel7)
        printf("É divisível por 3 e por 7");
    
    else
        printf("Não é divisível por 3 e por 7");

    return 0;
}