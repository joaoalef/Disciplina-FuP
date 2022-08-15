#include <stdio.h>

/*
A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários estatutários.
O valor máximo da prestação não poderá ultrapassar 30% do salário bruto.
Faça um programa em linguagem C que permita entrar com o salário bruto
e o valor da prestação e informar se o empréstimo pode ou não ser concedido.
*/

int main(){
    float salario;
    float prestacao;

    printf("Digite o valor do seu salário: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestação: ");
    scanf("%f", &prestacao);

    float concedivel = prestacao <= salario * 0.30;

    if(concedivel)
        printf("Empréstimo concedido");
    else
        printf("Empréstimo não concedido");

    return 0;
}