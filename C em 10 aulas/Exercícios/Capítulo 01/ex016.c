#include <stdio.h>

/*
Faça um programa em C que calcule o reajuste do salário de um funcionário. Para isso,
o programa deverá ler o salário atual do funcionário e ler o percentual de reajuste.
Ao final imprimir o valor do novo salário.
*/

int main(){
    int reajuste;
    float salario;

    printf("Digite o valor do seu salário: ");
    scanf("%f", &salario);
    printf("Digite o percentual de reajuste: ");
    scanf("%d", &reajuste);

    salario = salario + salario * (reajuste / 100.0);

    printf("O salário após o reajuste é igual a: R$%.2f", salario);

    return 0;
}