#include <stdio.h>

/*
Faça um programa que receba dois valores inteiros, após receber esses dois valores,
uma função deve calcular e retornar para o programa o resultado da soma e da subtração dos valores.
Obs.: Apenas uma função deve realizar esta operação, desta forma, faça uso de ponteiros.
*/

void calculo(int n1, int n2, int *soma, int *subtracao){
    *soma = n1 + n2;
    *subtracao = n1 - n2;
}

void main(){
    int n1, n2;
    int soma, subtracao;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    calculo(n1, n2, &soma, &subtracao);

    printf("\nA soma dos dois valores é: %d", soma);
    printf("\nA subtração dos dois valores é: %d", subtracao);
}