#include <stdio.h>

/*
Faça um programa que permita entrar com o salário de uma pessoa e imprima o
desconto do INSS segundo a tabela seguir:

Isento - Menor ou igual à R$600,00
20% - Maior que R$600,00 e menor ou igual a R$1200,00
25% - Maior que R$1200,00 e menor ou igual a R$2000,00
30% - Maior que R$2000,00
*/

int main(){
    float salario;
    float desconto;

    printf("Digite o valor do seu salário: ");
    scanf("%f", &salario);

    float isento = salario <= 600;
    float p20 = salario > 600 && salario <= 1200;
    float p25 = salario > 1200 && salario <= 2000;
    float p30 = salario > 2000;

    if(isento)
        printf("Você está isento do INSS");

    else if(p20){
        desconto = salario * 0.20;
        printf("Você recebe um desconto de 20%%, equivalente a: R$%.2f", desconto);
    }

    else if(p25){
        desconto = salario * 0.25;
        printf("Você recebe um desconto de 25%%, equivalente a: R$%.2f", desconto);
    }

    else if(p30){
        desconto = salario * 0.30;
        printf("Você recebe um desconto de 30%%, equivalente a: R$%.2f", desconto);
    }

    return 0;
}