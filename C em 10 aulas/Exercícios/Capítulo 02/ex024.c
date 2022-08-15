#include <stdio.h>

/*
A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar
dos motoristas o DUT. Sabendo-se que o mês em que o emplacamento do carro
deve ser renovado é determinado pelo último número da placa do mesmo, faça
um programa que, a partir da leitura da placa do carro, informe o mês em que o
emplacamento deve ser renovado.
*/

int main(){
    int placa;
    int milhar;
    int centena;
    int dezena;
    
    printf("Digite o numero da placa do carro no formato <9999>: ");
    scanf("%d", &placa);
    
    milhar = placa / 1000;
    placa = placa - (milhar * 1000);
    centena = placa / 100;
    placa = placa - (centena * 100);
    dezena = placa / 10;
    placa = placa - (dezena * 10);
    
    printf("Mês de revisão: %d", placa);

    return 0;
}