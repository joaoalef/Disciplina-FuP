#include <stdio.h>
#include <string.h>

typedef struct f{
    int cod;
    char nome[30];
    float salario;
    int depto;
    int cargo;
} Funcionario;

void main(){
    Funcionario f1, f2;

    f1.cod = 1;
    strcpy(f1.nome, "Alef");
    f1.salario = 1200;

    printf("Codigo: %d", f1.cod);
    printf("\nNome: %s", f1.nome);
    printf("\nSalario: R$%.2f", f1.salario);

    printf("\n\nDigite o codigo: ");
    scanf("%d", &f2.cod);
    printf("Digite o nome: ");
    scanf(" %[^\n]", f2.nome);
    printf("Digite o salario: ");
    scanf("%f", &f2.salario);

    printf("\nCodigo: %d", f2.cod);
    printf("\nNome: %s", f2.nome);
    printf("\nSalario: R$%.2f", f2.salario);
}