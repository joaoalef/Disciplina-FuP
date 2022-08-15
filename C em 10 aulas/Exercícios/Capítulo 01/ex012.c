#include <stdio.h>

/*
Faça um programa em C que leia um número real e calcule o quadrado deste número.
Ao final, o programa deve imprimir o resultado do cálculo.
*/

int main(){
    float n;

    printf("Digite um número: ");
    scanf("%f", &n);

    n = n * n;

    printf("\nO quadrado desse número é: %.2f", n);

    return 0;
}