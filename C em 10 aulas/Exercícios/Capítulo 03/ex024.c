#include <stdio.h>

/*
Faça um programa que calcule quantos litros de gasolina são usados em uma viagem, sabendo que um carro faz 10 km/litro.

O usuário fornecerá a velocidade do carro e o período de tempo que viaja nesta velocidade para cada trecho do percurso.

Então, usando as fórmulas
distância = tempo x velocidade
litros consumidos = distância / 10

O programa computará, para todos os valores não-negativos de velocidade, os litros de combustível consumidos.

O programa deverá imprimir a distância e o número de litros de combustível gastos naquele trecho.

Deverá imprimir também o total de litros gastos na viagem.

O programa encerra quando o usuário informar um valor negativo de velocidade
*/

int main(){
    float velocidade;
    float tempo;
    float litros;
    float distancia;
    float total = 0;

    do{
        printf("Digite a velocidade do carro: ");
        scanf("%f", &velocidade);
        if(velocidade < 0) break;

        printf("Digite o tempo percorrido durante a viagem: ");
        scanf("%f", &tempo);

        distancia = velocidade * tempo;
        litros = distancia / 10;
        total += litros;

        printf("\nDistância percorrido: %.1f", distancia);
        printf("\nLitros gasto nesse trecho da viagem: %.1f\n\n", litros);
    } while(velocidade >= 0);

    printf("\nTotal gasto na viagem: %.1f", total);

    return 0;
}
