#include <stdio.h>

/*
Uma pousada estipulou o preço para a diária em R$30,00 e mais uma taxa de
serviços diários de:

• R$15,00, se o número de dias for menor que 10;
• R$8,00, se o número de dias for maior ou igual a 10;

Faça um programa que imprima o nome, a conta e o número da conta de cada cliente
e ao final o total faturado pela pousada.

O programa deverá ler novos clientes até que o usuário digite 0 como número da conta
*/

int main(){
    char registro;
    float custo;
    float taxa = 0;
    int dias;

    printf("Deseja registrar um hóspede <S / N>? ");
    scanf("%c", &registro);

    if(registro == 'N') printf("Programa encerrado.");

    while(registro == 'S'){
        printf("\nDigite quantos dias passará na pousada: ");
        scanf("%d", &dias);

        if(dias < 10) taxa = 15.0;
        else taxa = 8.0;
        
        custo = 30.0 + taxa;

        printf("Custo da hospedagem: R$%.2f", custo);

        printf("\n\nDeseja registrar um hóspede <S / N>? ");
        getchar();
        scanf("%c", &registro);

        if(registro == 'N') printf("Programa encerrado.");
    } 
    
    return 0;
}