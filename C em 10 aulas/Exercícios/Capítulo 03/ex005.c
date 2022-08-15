#include <stdio.h>

/*
Sabendo-se que a unidade lógica e aritmética calcula o produto através de somas
sucessivas, crie um programa que calcule o produto de dois números inteiros
lidos. Suponha que os números lidos sejam positivos e que o multiplicando seja
menor do que o multiplicador
*/

int main(){
    int multiplicando;
    int multiplicador;
    int soma = 0;
    int i;

    printf("Digite o multiplicando: ");
    scanf("%d", &multiplicando);

    printf("Digite o multiplicador: ");
    scanf("%d", &multiplicador);

    if(multiplicador < 0 || multiplicando < 0 || multiplicando < multiplicador)
        printf("Os dois valores devem ser positivos e o multiplicando deve ser menor que o multiplicador!");

    else{
        for(i=1; i<=multiplicador; i++) soma += multiplicando;

        printf("Resultado: %d", soma);
    }

    return 0;
}