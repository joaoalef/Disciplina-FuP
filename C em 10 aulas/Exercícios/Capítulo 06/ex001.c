#include <stdio.h>

/*
Implemente um programa em C que leia o nome, a idade e o endereço de uma
pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela
os dados da estrutura lida.
*/

typedef struct p{
    char nome[50];
    int idade;
    char endereco[100];
} pessoa;

void main(){
    pessoa p;

    printf("Digite seu nome: ");
    scanf("%[^\n]", p.nome);

    printf("Digite a idade: ");
    scanf("%d", &p.idade);

    printf("Digite o endereço: ");
    scanf(" %[^\n]", p.endereco);

    printf("\nNome: %s", p.nome);
    printf("\nIdade: %d", p.idade);
    printf("\nEndereço: %s", p.endereco);
}