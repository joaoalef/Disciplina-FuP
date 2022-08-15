#include <stdio.h>

/*
Depois da liberação do governo para as mensalidades dos planos de saúde, as
pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito
caro. Um vendedor de um plano de saúde apresentou a tabela a seguir. Faça um
programa que entre com o nome e a idade de uma pessoa e imprima o nome e o
valor que ela deverá pagar.
Idade Valor
Até 10 anos R$30,00
Acima de 10 até 29 anos R$60,00
Acima de 29 até 45 anos R$120,00
Acima de 45 até 59 anos R$150,00
Acima de 59 até 65 anos R$250,00
Maior que 65 anos R$400,00
*/

int main(){
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    int valido = idade > 0;

    int v30 = idade <= 10;
    int v60 = idade > 10 && idade <= 29;
    int v120 = idade > 29 && idade <= 45;
    int v150 = idade > 45 && idade <= 59;
    int v250 = idade > 59 && idade <= 65;
    int v400 = idade > 65;

    if(valido){
        printf("\nNome: %s", nome);

        if(v30)
            printf("Valor a pagar: R$30,00");

        else if(v60)
            printf("Valor a pagar: R$60,00");

        else if(v120)
            printf("Valor a pagar: R$120,00");

        else if(v150)
            printf("Valor a pagar: R$150,00");

        else if(v250)
            printf("Valor a pagar: R$250,00");
        
        else if(v400)
            printf("Valor a pagar: R$400,00");
    }

    else
        printf("Idade inválida");

    return 0;
}