#include <stdio.h>

/*
Crie uma estrutura representando um aluno de uma disciplina.
Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Defina também um tipo para esta estrutura.
Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa estrutura.
Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco.
*/

typedef struct aluno{
    int matricula;
    char nome[50];
    float AP1, AP2, AP3;
} Aluno;

void main(){
    Aluno alunos[5];
    int melhor_aluno = 0;
    float melhor_media = 0;
    float media = 0;

    printf("------- Digite os dados dos alunos -------\n");
    
    for(int i = 0; i < 5; i++){
        printf("\n\t\tALUNO %d\n", i+1);
        printf("\nInforme a matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Informe o nome: ");
        scanf(" %s", &alunos[i].nome);

        printf("Informe a nota da AP1: ");
        scanf("%f", &alunos[i].AP1);

        printf("Informe a nota da AP1: ");
        scanf("%f", &alunos[i].AP2);

        printf("Informe a nota da AP1: ");
        scanf("%f", &alunos[i].AP3);

        media = (alunos[i].AP1 + alunos[i].AP2 + alunos[i].AP3) / 3.0;

        if(media > melhor_media){
            melhor_media = media;
            melhor_aluno = i;
        }
    }

    printf("\n------- Aluno que possui maior média geral -------");

    printf("\nNome: %s", alunos[melhor_aluno].nome);
    printf("\nMatrícula: %d", aluno[melhor_aluno].matricula);
    printf("\nNota da AP1: %.1f", alunos[melhor_aluno].AP1);
    printf("\nNota da AP2: %.1f", alunos[melhor_aluno].AP2);
    printf("\nNota da AP3: %.1f", alunos[melhor_aluno].AP3);
}