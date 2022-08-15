#include <stdio.h>

/*
Uma pesquisa de opinião realizada no Rio de Janeiro, teve as seguintes perguntas:

• Qual o seu time de coração?
1-Fluminense;
2-Botafogo;
3-Vasco;
4-Flamengo;
5-Outros

• Onde você mora?
1-RJ;
2-Niterói;
3-Outros

• Qual o seu salário?

Faça um programa que imprima:
• o número de torcedores por clube;
• a média salarial dos torcedores do Botafogo;
• o número de pessoas moradoras do Rio de Janeiro, torcedores de outros clubes;
• o número de pessoas de Niterói torcedoras do Fluminense

Obs.: O programa encerra quando se digita 0 para o time.
*/

int main(){
    int cidade, time_coracao, fluminense = 0, botafogo = 0, vasco = 0, flamengo = 0, outros = 0;
    int  rj_outros = 0, niteroi_fluminense = 0;
    int iniciado = 0;
    float media_salario_botafogo = 0, salario;

    do{
        printf("Qual seu time do coração?");
        printf("\n1 - Fluminense.");
        printf("\n2 - Botafogo.");
        printf("\n3 - Vasco.");
        printf("\n4 - Flamengo.");
        printf("\n5 - Outros.");
        printf("\n6 - Encerrar programa.");
        printf("\nDigite sua opção: ");
        scanf("%d", &time_coracao);

        if(time_coracao == 6){
            printf("\nPrograma encerrado.\n");
            break;
        }

        iniciado++;

        printf("\nOnde você mora?");
        printf("\n1 - Rio de Janeiro.");
        printf("\n2 - Niterói.");
        printf("\n3 - Outros.");
        printf("\nDigite sua opção: ");
        scanf("%d", &cidade);
    
        printf("\nDigite o valor do seu salário: ");
        scanf("%f", &salario);

        if(time_coracao == 1){
            if(cidade == 2) niteroi_fluminense++;
            fluminense++;
        }

        else if(time_coracao == 2){
            media_salario_botafogo += salario;
            botafogo++;
        }

        else if(time_coracao == 3)
            vasco++;

        else if(time_coracao == 4)
            flamengo++;

        else if(time_coracao == 5){
            if(cidade == 1) rj_outros++;
            outros++;
        }

        printf("\n");
    }
        while(time_coracao != 6);

    if(iniciado > 0){
    media_salario_botafogo = media_salario_botafogo / botafogo;

    printf("\nQuantidade de torcedores do fluminense: %d", fluminense);
    printf("\nQuantidade de torcedores do botafogo: %d", botafogo);
    printf("\nQuantidade de torcedores do vasco: %d", vasco);
    printf("\nQuantidade de torcedores do flamengo: %d", flamengo);
    printf("\nQuantidade de torcedores de outros times: %d", outros);
    printf("\nMédia salarial dos torcedores do botafogo: R$%.2f", media_salario_botafogo);
    printf("\nNúmero de moradores do Rio de Janeiro que torcem para outros times: %d", rj_outros);
    printf("\nNúmero de moradores de Niteróu que torcem para o fluminense: %d", niteroi_fluminense);
    }

    return 0;
}