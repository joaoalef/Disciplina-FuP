#include <stdio.h>

/*
Construa um programa que permita armazenar o salário de 20 pessoas.
Calcular e armazenar o novo salário sabendo-se que o reajuste foi de 8%.
Imprimir uma listagem numerada com o salário e o novo salário.
Declare quantos vetores forem necessários.
*/

int main(){
    float salario[20];
    float novo_salario[20];

    printf("Digite os salários para acontecer o reajuste:\n");
    for(int i=0; i<20; i++){
        scanf("%f", &salario[i]);
        novo_salario[i] = salario[i] + (salario[i] * 0.08);
    }

    printf("\nLista numerado com salário atual (após reajuste):\n");
    for(int i=0; i<20; i++) printf("%d - R$%.2f\n", i + 1, novo_salario[i]);

    return 0;
}