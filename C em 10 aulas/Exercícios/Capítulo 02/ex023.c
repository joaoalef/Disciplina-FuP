#include <stdio.h>

/*
Crie um programa que informe a quantidade total de calorias de uma refeição a
partir da escolha do usuário que deverá informar o prato, a sobremesa, e bebida
conforme a tabela a seguir:
Vegetariano 180cal | Abacaxi 75cal           | Chá 20cal
Peixe 230cal       | Sorvete diet 110cal     | Suco de laranja 70cal
Frango 250cal      | Mousse diet 170cal      | Suco de melão 100cal
Carne 350cal       | Mousse chocolate 200cal | Refrigerante diet 65cal
*/

int main(){
    int calorias = 0;
    int prato;
    int sobremesa;
    int bebida;

    printf("Pratos disponíveis:");
    printf("\n1 - Vegetariano.");
    printf("\n2 - Peixe.");
    printf("\n3 - Frango.");
    printf("\n4 - Carne.");
    printf("\nDigite sua opção: ");
    scanf("%d", &prato);

    printf("\nSobremesas disponíveis:");
    printf("\n1 - Abacaxi.");
    printf("\n2 - Sorvete diet.");
    printf("\n3 - Mousse diet.");
    printf("\n4 - Mousse de chocolate.");
    printf("\nDigite sua opção: ");
    scanf("%d", &sobremesa);

    printf("\nBebidas disponíveis:");
    printf("\n1 - Chá.");
    printf("\n2 - Suco de laranja.");
    printf("\n3 - Suco de melão.");
    printf("\n4 - Refrigerante diet.");
    printf("\nDigite sua opção: ");
    scanf("%d", &bebida);

    switch(prato){
        case 1:
            calorias += 180;
            break;
        case 2:
            calorias += 230;
            break;
        case 3:
            calorias += 250;
            break;
        case 4:
            calorias += 350;
            break;
        default:
            printf("Opção de prato inválida.");
    }

    switch(sobremesa){
        case 1:
            calorias += 75;
            break;
        case 2:
            calorias += 110;
            break;
        case 3:
            calorias += 170;
            break;
        case 4:
            calorias += 200;
            break;
        default:
            printf("Opção de sobremesa inválida.");
    }

    switch(bebida){
        case 1:
            calorias += 20;
            break;
        case 2:
            calorias += 70;
            break;
        case 3:
            calorias += 100;
            break;
        case 4:
            calorias += 65;
            break;
        default:
            printf("Opção de bebida inválida.");
    }

    printf("\nA refeição completa possui %d calorias.", calorias);

    return 0;
}