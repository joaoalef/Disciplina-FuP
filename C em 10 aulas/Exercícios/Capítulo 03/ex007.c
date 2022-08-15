#include <stdio.h>

/*
Crie um programa em linguagem C que permita entrar com o nome, a nota da
prova 1 e da prova 2 de 15 alunos. Ao final, imprimir uma listagem, contendo:
nome, nota da prova 1, nota da prova 2, e média das notas de cada aluno. Ao final,
imprimir a média geral da turma
*/

int main(){
    char nome[50];
    float nota1;
    float nota2;
    float mediageral;

    for(int i=1; i<=15; i++){
        printf("Registrar nome do aluno: ");
        fgets(nome, 50, stdin);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        float media = (nota1 + nota2) / 2.0;
        mediageral += media;

        printf("\nAluno: %s", nome);
        printf("1° Nota: %.1f\n", nota1);
        printf("2° Nota: %.1f\n", nota2);
        printf("Média: %.1f\n\n", media);

        getchar();
    }

    mediageral = mediageral / 15.0;

    printf("\nMédia geral da turma: %.1f", mediageral);


    return 0;
}