#include <stdio.h>

/*
Em um campeonato Europeu de Volleyball, se inscreveram 30 países. Sabendo-se
que na lista oficial de cada país consta, além de outros dados, peso e idade de 12
jogadores, crie um programa que apresente as seguintes informações:

• O peso médio e a idade média de cada um dos times;
• O atleta mais pesado de cada time;
• O atleta mais jovem de cada time;
• O peso médio e a idade média de todos os participantes.
*/

int main(){
    int idade_jogador = 0;
    float peso_jogador = 0;
    float mais_jovem = 0;
    float mais_pesado = 0;
    float idade_media = 0;
    float peso_medio = 0;
    float idade_media_total = 0;
    float peso_medio_total = 0;


    for(int i=1; i<=30; i++){
        for(int j=1; j<=12; j++){
            printf("Digite o peso do jogador: ");
            scanf("%f", &peso_jogador);

            printf("Digite a idade do jogador: ");
            scanf("%d", &idade_jogador);

            printf("\n");

            if(peso_jogador > mais_pesado) mais_pesado = peso_jogador;
            if(idade_jogador > mais_jovem) mais_jovem = peso_jogador;

            idade_media += idade_jogador;
            peso_medio += peso_jogador;
        }
        
        idade_media_total += idade_media;
        peso_medio_total += peso_medio;

        idade_media = idade_media / 12.0;
        peso_medio = peso_medio / 12.0;
        
        printf("Idade média do time: %.1f", idade_media);
        printf("\nPeso médio do time: %.1f", peso_medio);
        printf("\nO atleta mais jovem do time tem: %.0f anos de idade.", mais_jovem);
        printf("\nO atleta mais pesado do time pesa: %.1f Kg.\n\n", mais_pesado);
    }

    idade_media_total = idade_media_total / 360;
    peso_medio_total = peso_medio_total / 360;

    printf("A idade média de todos os jogadores do campeonato é de %.0f anos de idade.", idade_media_total);
    printf("\nO peso médio de todos os jogadores do campeonato é de %.1f Kg.", peso_medio_total);

    return 0;
}