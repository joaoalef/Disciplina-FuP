#include <stdio.h>

/*
Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma certa cidade, em um determinado dia.

Para cada casa visitada foram fornecidos o número do canal (4, 5, 7, 12)
e o número de pessoas que estavam assistindo a ele naquela casa.

Se a televisão estivesse desligada, nada seria anotado, ou seja, esta casa não entraria na pesquisa.

Criar um programa que:
• Leia um número indeterminado de dados, isto é, o número do canal e o número de pessoas que estavam assistindo;

• Calcule e imprima a porcentagem de audiência em cada canal.

Obs.: Para encerrar a entrada de dados, digite o número do canal zero.
*/

int main(){
    int n = 0, pessoas, canal, iniciado = 0;
    float audiencia = 0, aud_4 = 0, aud_5 = 0, aud_7 = 0, aud_12 = 0;

    printf("Digite o canal: ");
    scanf("%d", &canal);

    if(canal == 0) printf("\nPrograma encerrado.\n");

    while(canal != 0){
        iniciado++;

        printf("Digite a quantidade de pessoas assistindo: ")/
        scanf("%d", &pessoas);

        audiencia += pessoas;

        if(canal == 4) aud_4 += pessoas;
        else if(canal == 5) aud_5 += pessoas;
        else if(canal == 7) aud_7 += pessoas;
        else if(canal == 12) aud_12 += pessoas;

        printf("Digite o canal: ");
        scanf("%d", &canal);

        if(canal == 0) printf("\nPrograma encerrado.\n");
    }
        while(canal != 0);

    if(iniciado == 1){
        aud_4 = (aud_4 * 100.0) / audiencia;
        aud_5 = (aud_5 * 100.0) / audiencia;
        aud_7 = (aud_7 * 100.0) / audiencia;
        aud_12 = (aud_12 * 100.0) / audiencia;

        printf("\nPorcentagem de audiência no canal 4: %.1f%%", aud_4);
        printf("\nPorcentagem de audiência no canal 5: %.1f%%", aud_5);
        printf("\nPorcentagem de audiência no canal 7: %.1f%%", aud_7);
        printf("\nPorcentagem de audiência no canal 12: %.1f%%", aud_12);
    }

    return 0;
}