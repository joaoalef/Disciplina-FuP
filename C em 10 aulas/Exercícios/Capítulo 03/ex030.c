#include <stdio.h>

/*
Faça um programa que receba a idade e o estado civil (C-casado, S-solteiro, V-viúvo e D-desquitado ou separado)
de várias pessoas.

Calcule e imprima:
• a quantidade de pessoas casadas;
• a quantidade de pessoas solteiras;
• a média das idades das pessoas viúvas;
• a porcentagem de pessoas desquitadas ou separadas dentre todas as pessoas analisadas.

Obs.: Para encerrar a entrada de dados, digite um número menor que zero para a idade
*/

int main(){
    char registro;

    printf("Deseja registrar uma pessoa <S / N>? ");
    scanf("%c", &registro);

    if(registro == 'S'){
        int casados = 0, solteiros = 0, viuvas = 0, separadas = 0;
        int idade, total = 0;
        float mediav = 0, percentS = 0;
        char estado_civil;

        while(registro == 'S'){
            printf("\nDigite sua idade: ");
            scanf("%d", &idade);

            printf("\nC - Casado.");
            printf("\nS - Solteiro.");
            printf("\nV - Viúvo.");
            printf("\nD - Desquitado ou separado.");
            printf("\nDigite seu estado civil: ");
            getchar();
            scanf("%c", &estado_civil);

            char valido = estado_civil == 'C' || estado_civil == 'S' || estado_civil == 'V' || estado_civil == 'D';

            if(!valido){
                printf("\nOpção inválida. Programa encerrado.");
                break;
            }

            total++;

            if(estado_civil == 'C') casados++;
            if(estado_civil == 'S') solteiros++;
            if(estado_civil == 'D') separadas++;
            if(estado_civil == 'V'){
                viuvas++;
                mediav += idade;
            }

            printf("\nDeseja registrar uma pessoa <S / N>? ");
            getchar();
            scanf("%c", &registro);
        }

        if(total > 0){
            percentS = (separadas * 100) / total;
            mediav /= viuvas;

            printf("\nQuantidade de pessoas casadas: %d", casados);
            printf("\nQuantidade de pessoas solteiras: %d", solteiros);
            printf("\nMédia de idade das pessoas viúvas: %.1f anos", mediav);
            printf("\nPorcentagem de pessoas separadas: %.1f%%", percentS);
        }
    }

    else if(registro == 'N') printf("\nPrograma encerrado.");
    else printf("\nResposta inválida.\nPrograma encerrado.");

    return 0;
}
