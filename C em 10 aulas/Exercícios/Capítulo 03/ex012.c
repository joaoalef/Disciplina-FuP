#include <stdio.h>

/*
Dado um país A, com 5 milhões de habitantes e uma taxa de natalidade de 3% ao
ano, e um país B com 7 milhões de habitantes e uma taxa de natalidade de 2% ao
ano, fazer um programa que calcule e imprima o tempo necessário para que a
população do país A ultrapasse a população do país B
*/

int main(){
    float populacao_A = 5000000;
    float populacao_B = 7000000;
    int anos;

    do{
        populacao_A += populacao_A * 0.03;
        populacao_B += populacao_B * 0.02;
        anos++;
    }
        while(populacao_A < populacao_B);

    printf("Daqui a %d anos a população da cidade A superará a da cidade B.", anos);

    return 0;
}