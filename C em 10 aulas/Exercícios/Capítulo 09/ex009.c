#include <stdio.h>

/*
Você foi contratado para fazer um programa para verificar se o gerenciador de memória está funcionando.

Seu programa deverá ler:
    3 números inteiros.
    3 números decimais.
    3 letras.
    
Armazena-los e depois, substituir:
    Inteiros pelo número 2014.
    Decimais por 9.99.
    Letras por ’Y’.

Depois da substituição, o programa deverá exibir o valor das variáveis já devidamente atualizados.
*/

void main(){
    int i[3], *pi;
    float d[3], *pd;
    char l[3], *pl;

    // ENTRADA DE DADOS
    printf("Informe os dados:\n\n");

    for(int j = 0; j < 3; j++){
        printf("Digite o %d° inteiro: ", j + 1);
        scanf("%d", &i[j]);
    }

    printf("\n");

    for(int j = 0; j < 3; j++){
        printf("Digite o %d° decimal: ", j + 1);
        scanf("%f", &d[j]);
    }

    printf("\n");

    for(int j = 0; j < 3; j++){
        printf("Digite a %d° letra: ", j + 1);
        scanf(" %c", &l[j]);
    }

    // CONFIRMAÇÃO DO ARMAZENAMENTO
    printf("\n---------------------------------------------\n");
    printf("\nOs dados informados foram:");
    printf("\nInteiros: %d, %d e %d", i[0], i[1], i[2]);
    printf("\nDecimais: %.1f, %.1f e %.1f", d[0], d[1], d[2]);
    printf("\nLetras: %c, %c e %c\n", l[0], l[1], l[2]);
    printf("\n---------------------------------------------\n");

    // ALTERAÇÃO DE DADOS
    for(int j = 0; j < 3; j++){
        pi = &i[j];
        *pi = 2014;

        pd = &d[j];
        *pd = 9.99;

        pl = &l[j];
        *pl = 'Y';
    }

    // IMPRIMINDO OS DADOS ATUAIS
    printf("\nValores modificados:\n");

    printf("\n");

    for(int j = 0; j < 3; j++)
        printf("%d° inteiro: %d\n", j + 1, i[j]);

    printf("\n");

    for(int j = 0; j < 3; j++)
        printf("%d° decimal: %.2f\n", j + 1, d[j]);

    printf("\n");

    for(int j = 0; j < 3; j++)
        printf("%d° letra: %c\n", j + 1, l[j]);
}