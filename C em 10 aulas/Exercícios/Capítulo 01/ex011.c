#include <stdio.h>

/*
Faça um programa em C que leia dois números reais e calcule as quatro operações básicas entre estes dois números,
adição, subtração, multiplicação e divisão. Ao final, o programa deve imprimir os resultados dos cálculos.
*/

int main(){
    float n1, n2;
    float soma;
    float subt;
    float mult;
    float divi;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    soma = n1 + n2;
    subt = n1 - n2;
    mult = n1 * n2;
    divi = n1 / n2;

    printf("\nSoma: %.2f", soma);
    printf("\nSubtração: %.2f", subt);
    printf("\nMultiplicação: %.2f", mult);
    printf("\nDivisão: %.2f", divi);

    return 0;
}