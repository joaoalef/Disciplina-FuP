#include <stdio.h>

/*
A biblioteca de uma Universidade deseja fazer um programa que leia o nome do
livro que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir
um recibo conforme mostrado a seguir. Considerar que o professor tem dez dias
para devolver o livro e o aluno só três dias.
• Nome do livro:
• Tipo de usuário:
• Total de dias:
*/

int main(){
    char livro[100];
    int usuario;

    printf("Digite o nome do livro: ");
    fgets(livro, 100, stdin);
    printf("Digite o tipo de usuario <1-Professor / 2-Aluno>: ");
    scanf("%d", &usuario);

    printf("\nNome do livro: %s", livro);

    switch(usuario){
        case 1:
            printf("Tipo de usuário: Professor");
            printf("\nTotal de dias para devolução: 10");
            break;
        case 2: 
            printf("Tipo de usuário: Aluno");
            printf("\nTotal de dias para devolução: 3");
            break;
        default:
            printf("Usuário inválido");
    }

    return 0;
}