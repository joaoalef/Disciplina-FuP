#include <stdio.h>

/*
Faça um programa em C que calcule a quantidade de litros de combustível consumidos em uma viagem,
Sabendo-se que o carro tem autonomia de 12 km por litro de combustível.
O programa deverá ler o tempo decorrido na viagem e a velocidade média e aplicar as fórmulas:
D = T . V
L = D / 12

Em que:
D = distancia percorrida em horas
T = tempo decorrido
V = velocidade média
L = litros de combustível consumidos

Ao final, o programa deverá imprimir a distância percorrida e a quantidade de litros consumidos na viagem.
*/

int main(){
    float tempo;
    float velocidade;
    float distancia;
    float litros;

    printf("Qual a quantia de tempo decorrido na viagem? (Horas)");
    scanf("%f", &tempo);
    printf("Qual foi a velocidade média? (Km/h)");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12;

    printf("\nDistância percorrida: %.2f", distancia);
    printf("\nA quantidade de litros de combustível consumidos durante a viagem foi: %.2f", litros);

    return 0;
}