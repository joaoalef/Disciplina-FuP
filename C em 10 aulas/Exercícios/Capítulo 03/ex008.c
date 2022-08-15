#include <stdio.h>

/*
Faça um programa que permita entrar com o nome e o salário bruto de 10 pessoas.
Após ler os dados, imprimir o nome e o valor da alíquota do imposto de renda
calculado conforme a tabela a seguir:

Isento - Salário menor que R$1300,00
10% do salário bruto - Salário maior ou igual a R$1300,00 e menor que R$2300,00
15% do salário bruto - Salário maior ou igual a R$2300,00
*/

int main(){
    float salario;
    float aliquota;
    char nome[50];

    for(int i=1; i<=2; i++){
        printf("Digite o nome da pessoa: ");
        fgets(nome, 50, stdin);
        
        printf("Digite o valor do salário bruto: ");
        scanf("%f", &salario);

        float isento = salario < 1300;
        float dez = salario >= 1300 && salario < 2300;
        float quinze = salario >= 2300;

        float percent10 = salario * 0.10;
        float percent15 = salario * 0.15;

        printf("\nNome: %s", nome);

        if(isento) printf("Isento.\n");
        else if(dez) printf("Alíquota: R$%.2f\n", percent10);
        else if(quinze) printf("Alíquota: R$%.2f\n", percent15);

        getchar();
    }

    return 0;
}