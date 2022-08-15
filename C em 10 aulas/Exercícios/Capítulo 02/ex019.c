#include <stdio.h>

/*
Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores
para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o
mesmo número de pontos, criar um programa em C que informe se uma equipe
foi classificada, de acordo com a seguinte especificação:

    • Ler os pontos obtidos por cada jogador da equipe;
    • Mostrar esses valores em ordem decrescente;
    • Se a soma dos pontos for maior do que 100, imprimir a média aritmética
    entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".
*/

int main(){
    int membro1;
    int membro2;
    int membro3;
    int total;

    printf("Digite os pontos obtidos pelo primeiro jogador: ");
    scanf("%d", &membro1);
    printf("Digite os pontos obtidos pelo segundo jogador: ");
    scanf("%d", &membro2);
    printf("Digite os pontos obtidos pelo terceiro jogador: ");
    scanf("%d", &membro3);

    total = (membro1 + membro2 + membro3) / 3;

    int classificados = total >= 100;

    if(classificados){
        printf("\nMédia da equipe: %d", total);
        printf("\nStatus: Classificados.");
    }

    else{
        printf("\nMédia da equipe: %d", total);
        printf("\nStatus: Desclassificados.");
    }

    return 0;
}