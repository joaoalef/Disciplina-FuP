#include <stdio.h>

/*
Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos.
Calcule e armazene a média arredondada.

Armazene também a situação do aluno: 1- Aprovado ou 2-Reprovado.

Ao final o programa deve imprimir uma listagem contendo as notas, a média e a situação de cada aluno em formato tabulado.
Utilize quantos vetores forem necessários para armazenar os dados.
*/

int main(){
    float ap1[15];
    float ap2[15];
    float media[15];
    int status[15];

    printf("Digite as notas da AP1:\n");
    for(int i=0; i<15; i++) scanf("%f", &ap1[i]);

    printf("\nDigite as notas da AP2:\n");
    for(int i=0; i<15; i++) scanf("%f", &ap2[i]);

    for(int i=0; i<15; i++)
    {
        media[i] = (ap1[i] + ap2[i]) / 2.0;

        if(media[i] >= 7)
            status[i] = 1; 
        else
            status[i] = 0;
    }

    printf("\nAP1 \t AP2 \t Média \t Status\n");
    for(int i=0; i<15; i++)
    {
        int aprovado = status[i] == 1;
        int reprovado = status[i] == 0;

        printf("%.1f\t", ap1[i]);
        printf(" %.1f\t", ap2[i]);
        printf("  %.1f\t", media[i]);
        if(aprovado) printf("Aprovado\n");
        else if(reprovado) printf("Reprovado\n");
    }

    return 0;
}