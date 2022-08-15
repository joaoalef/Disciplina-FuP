#include <stdio.h>

/*
Crie um programa que leia números reais em um vetor de tamanho 10.
Imprima o endereço de cada posição desse vetor.
*/

void main(){
    float n[10];

    for(int i=0; i<10; i++)
        printf("Endereço de memória da posição %d: %f\n", i+1, &n[i]);
}