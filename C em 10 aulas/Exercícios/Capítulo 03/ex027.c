#include <stdio.h>
#include <limits.h>

/*
Crie um programa que calcule e imprima o CR do período para os alunos de computação.
Para cada aluno, o algoritmo deverá ler:

• número da matrícula;
• quantidade de disciplinas cursadas;
• notas em cada disciplina;

Além do CR de cada aluno, o programa deve imprimir o melhor CR dos alunos que cursaram 5 ou mais disciplinas.

• fim da entrada de dados é marcada por uma matrícula inválida (matrículas válidas de 1 a 5000);

• CR do aluno é igual à média aritmética de suas notas.
*/

int main(){
    char registro;

    printf("Deseja cadastrar um aluno <S / N>? ");
    scanf("%c", &registro);

    if(registro == 'S'){
        int qtd_disciplinas, matricula, iniciado = 0;
        float nota, maiorcr = INT_MIN;

        while(registro == 'S'){
            printf("\nDigite o número de matrícula do aluno: ");
            scanf("%d", &matricula);

            int valido = matricula >= 1 && matricula <= 5000;

            if(valido){
                float cr = 0;

                printf("Digite a quantidade de disciplinas cursadas: ");
                scanf("%d", &qtd_disciplinas);

                for(int i=1; i<=qtd_disciplinas; i++){
                    printf("Digite a nota da disciplina %d: ", i);
                    scanf("%f", &nota);

                    cr += nota;
                }

                cr /= qtd_disciplinas;

                if(qtd_disciplinas >= 5 && cr > maiorcr){
                    iniciado++;
                    maiorcr = cr;
                }

                printf("\nO CR do aluno de matrícula %d foi: %.1f\n\n", matricula, cr);

                printf("Deseja cadastrar um aluno <S / N>? ");
                getchar();
                scanf("%c", &registro);

                if(registro == 'N') printf("Programa encerrado.");
            }

            else if(!valido) printf("Matrícula inválida, tente novamente.");
        }

        if(iniciado) printf("\n\nMaior CR de alunos que cursaram 5 disciplinas ou mais: %.1f", maiorcr);
    }

    else printf("\nPrograma encerrado.");

    return 0;
}