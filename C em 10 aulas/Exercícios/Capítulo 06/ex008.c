#include <stdio.h>
#include <limits.h>

/*
Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa.
Faça uso de estruturas aninhadas e definição de novo tipo de dado.
Agora, escreva um programa que leia os dados de seis pessoas.
Calcule e exiba os nomes da pessoa mais nova e da mais velha.
*/

typedef struct data{
    int ano;
    int mes;
    int dia;
} data;

typedef struct cadastro{
    char nome[50];
    data aniversario;
} cadastro;

void main(){
    cadastro pessoa[3];
    data idades[3];
    data atual;
    int velha;
    int nova;

    printf("Digite a data atual");

    printf("\nDia: ");
    scanf("%d", &atual.dia);
    printf("Mês: ");
    scanf("%d", &atual.mes);
    printf("Ano: ");
    scanf("%d", &atual.ano);

    printf("\nAgora registre as pessoas.\n");

    for(int i = 0; i < 3; i++){
        printf("\nDia do nascimento: ");
        scanf("%d", &pessoa[i].aniversario.dia);

        printf("Mês do nascimento: ");
        scanf("%d", &pessoa[i].aniversario.mes);

        printf("Ano do nascimento: ");
        scanf("%d", &pessoa[i].aniversario.ano);

        printf("Nome: ");
        scanf(" %[^\n]", pessoa[i].nome);

        idades[i].ano = atual.ano - pessoa[i].aniversario.ano;
        idades[i].mes = atual.mes - pessoa[i].aniversario.mes;
        idades[i].dia = atual.dia - pessoa[i].aniversario.dia;

        if()
            if(idades[i].ano < idades[i-1].ano)
                velha = i;

            else if(idades[i].ano == idades[i-1].ano){
                
                if(idades[i].mes < idades[i-1].mes)
                    velha = i;

                else if(idades[i].mes == idades[i-1].mes){

                    if(idades[i].dia < idades[i-1].dia || idades[i].dia == idades[i-1].dia)
                        velha = i;
                }
            }
            
            if(idades[i].ano > idades[i-1].ano)
                nova = i;

            else if(idades[i].ano == idades[i-1].ano){
                
                if(idades[i].mes > idades[i-1].mes)
                    nova = i;

                else if(idades[i].mes == idades[i-1].mes){

                    if(idades[i].dia > idades[i-1].dia || idades[i].dia == idades[i-1].dia)
                        nova = i;
                }
            }
        
        
    }

    printf("A pessoa mais nova: %s", pessoa[nova].nome);
}