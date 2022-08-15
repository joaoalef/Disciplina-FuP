#include <stdio.h>

/*
Faça um programa em C que permita entrar com o ano de nascimento da pessoa e com o ano atual.
O programa deve imprimir a idade da pessoa.
Não se esqueça de verificar se o ano de nascimento informado é válido.
*/

int main(){
    int ano_nascimento;
    int ano_atual;
    int idade;

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano_nascimento);

    int valido = ano_nascimento > 0 && ano_nascimento <= ano_atual;

    if(valido){
        idade = ano_atual - ano_nascimento;
        printf("\nSua idade é %d anos", idade);
    }

    return 0;
}