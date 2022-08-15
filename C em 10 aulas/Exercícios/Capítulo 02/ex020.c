#include <stdio.h>

/*
O banco XXX concederá um crédito especial com juros de 2% aos seus clientes
de acordo com o saldo médio no último ano. Faça um programa que leia o saldo
médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir.
O programa deve imprimir uma mensagem informando o saldo médio e o valor
de crédito.

de 0 a 500 - nenhum crédito
de 501 a 1000 - 30% do valor do saldo médio
de 1001 a 3000 - 40% do valor do saldo médio
acima de 3001 - 50% do valor do saldo médio
*/

int main(){
    float saldo;

    printf("Digite o valor do seu saldo: ");
    scanf("%f", &saldo);

    float semcredito = saldo >= 0 && saldo <= 500;
    float credito30 = saldo > 500 && saldo <= 1000;
    float credito40 = saldo > 1000 && saldo <= 3000;
    float credito50 = saldo > 3000;

    if(semcredito){
        printf("\nSaldo: R$%.2f", saldo);
        printf("\nValor de crédito: R$0,00");
    }

    else if(credito30){
        credito30 = saldo * 0.30;
        printf("\nSaldo: R$%.2f", saldo);
        printf("\nValor de crédito: R$%.2f", credito30);
    }

    else if(credito40){
        credito40 = saldo * 0.40;
        printf("\nSaldo: R$%.2f", saldo);
        printf("\nValor de crédito: R$%.2f", credito40);
    }

    else if(credito50){
        credito50 = saldo * 0.50;
        printf("\nSaldo: R$%.2f", saldo);
        printf("\nValor de crédito: R$%.2f", credito50);
    }

    return 0;
}