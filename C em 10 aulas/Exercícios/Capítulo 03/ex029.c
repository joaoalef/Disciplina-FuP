#include <stdio.h>

/*
Construa um programa que receba o valor e o código de várias mercadorias vendidas em um determinado dia.
Os códigos obedecem a lista a seguir:

L-limpeza
A-Alimentação
H-Higiene

Calcule e imprima:

• o total vendido naquele dia, com todos os códigos juntos;
• o total vendido naquele dia em cada um dos códigos.

Obs.: Para encerrar a entrada de dados, digite o valor da mercadoria zero.
*/

int main(){
    char registro;

    printf("Deseja adicionar uma mercadoria <S / N>? ");
    scanf("%c", &registro);

    if(registro == 'S'){
        float total;
        float totalL = 0;
        float totalA = 0;
        float totalH = 0;
        float valor;
        char codigo;

        while(registro == 'S'){
            char valido = codigo == 'L' || codigo == 'A' || codigo == 'H';

            printf("Digite o valor do produto: ");
            scanf("%f", &valor);

            if(codigo == 'L') totalL += valor;
            if(codigo = 'A') totalA += valor;
            if(codigo = 'H') totalH += valor;

            printf("\nDeseja adicionar uma mercadoria <S / N>? ");
            getchar();
            scanf("%c", &registro);
        }

        total = totalL + totalA + totalH;

        printf("\nTotal vendido naquele dia, com todos os códigos juntos: R$%.2f", total);
        printf("\nTotal vendido naquele dia em produtos de limpeza: R$%.2f", totalL);
        printf("\nTotal vendido naquele dia em produtos de alimentação: R$%.2f", totalA);
        printf("\nTotal vendido naquele dia em produtos de higiene: R$%.2f", totalH);
    }

    else if(registro == 'N')
        printf("\nPrograma encerrado.");

    else
        printf("\nResposta inválida.\nPrograma encerrado.");

    return 0;
}