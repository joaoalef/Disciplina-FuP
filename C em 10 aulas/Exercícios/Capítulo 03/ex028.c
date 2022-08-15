#include <stdio.h>

/*
Construa um programa que receba a idade, a altura e o peso de várias pessoas.

Calcule e imprima:
• a quantidade de pessoas com idade superior a 50 anos;
• a média das alturas das pessoas com idade entre 10 e 20 anos;
• a porcentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas.
*/

int main(){
    char registro;

    printf("Deseja inserir uma pessoa <S / N>? ");
    scanf("%c", &registro);

    if(registro == 'S'){
        int idade, mais50 = 0, idade10a20 = 0, peso40 = 0, analisadas = 0;
        float altura, peso, media = 0, percent;

        while(registro == 'S'){
            printf("\nDigite a idade da pessoa: ");
            scanf("%d", &idade);
            printf("Digite a altura da pessoa: ");
            scanf("%f", &altura);
            printf("Digite o peso da altura: ");
            scanf("%f", &peso);

            analisadas++;

            if(idade > 50) mais50++;
            
            if(peso < 40) peso40++;

            if(idade > 10 && idade < 20){
                idade10a20++;
                media += altura;
            }

            printf("\nDeseja inserir uma pessoa <S / N>? ");
            getchar();
            scanf("%c", &registro);
        }

        percent = (peso40 * 100.0) / analisadas;
        media /= idade10a20;

        if(idade10a20 > 0)
            printf("\nMédia das alturas de pessoas com idade entre 10 e 20 anos: %.1f", media);
        printf("\nQuantidade de pessoas com idade superior a 50: %d", mais50);
        printf("\nPorcentagem de pessoas com peso inferior a 40: %.1f%%\n", percent);
    }

    else if(registro == 'N') printf("\nPrograma encerrado.");

    else printf("\nResposta inválida.\nPrograma encerrado.");

    return 0;
}