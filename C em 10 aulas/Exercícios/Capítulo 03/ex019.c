#include <stdio.h>

/*
Em uma Universidade, os alunos das turmas de informática fizeram uma prova de algoritmos.
Cada turma possui um número de alunos.

Criar um programa que imprima:
• quantidade de alunos aprovados;
• média de cada turma;
• percentual de reprovados.

Obs.: Considere aprovado com nota >= 7.0
*/

int main(){
    char registro;
    float reprovados_geral = 0;
    int aprovados_geral = 0;
    int qtd_alunos = 0;
    int qtd_turmas = 0;

    printf("Deseja cadastrar uma turma <S / N>? ");
    scanf("%c", &registro);
    getchar();

    if(registro == 'N') printf("Programa encerrado.");

    else{
        while(registro == 'S'){
            qtd_turmas++;

            int i;
            int alunos_turma = 0;
            float media = 0;
            float nota = 0;
            
            
            printf("\nQuantos alunos a turma possui? ");
            scanf("%d", &alunos_turma);

            qtd_alunos += alunos_turma;

            for(i=1; i<=alunos_turma; i++){
                printf("Digite a nota do aluno %d: ", i);
                scanf("%f", &nota);

                media += nota;

                if(nota >= 7) aprovados_geral++;
                else reprovados_geral++;

            }

            media /= alunos_turma;

            printf("Média da turma: %.1f\n\n", media);

            printf("Deseja cadastrar outra turma <S / N>? ");
            getchar();
            scanf("%c", &registro);

            if(registro == 'N') printf("Programa encerrado.\n");
        }

        reprovados_geral = reprovados_geral * 100.0 / qtd_alunos;

        printf("\nQuantidade de turmas na escola: %d", qtd_turmas);
        printf("\nQuantidade de alunos aprovados na escola: %d", aprovados_geral);
        printf("\nPorcentagem de alunos reprovados na escola: %.1f%%", reprovados_geral);
    }

    return 0;
}