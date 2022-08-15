#include <stdio.h>

/*
Você deve criar um programa para pegar uma lista de 24 temperaturas em Kelvin e convertê-las para Fahrenheit.
Faça essa conversão e imprima os resultados utilizando ponteiros.

Para a conversão, observe as fórmulas a seguir:
    F = 1.8×(K −273)+32 
*/

void fahrenheit(float *K, float *F){
    for(int i=0; i<24; i++)
        F[i] = 1.8 * (K[i] - 273.15) + 32;
}

void main(){
    float temp_K[24];
    float temp_F[24];

    printf("Digite a temperatura das cidades em Kelvin:\n\n");
    for(int i=0; i<24; i++){
        printf("Digite a temperatura da %d° cidade: ", i + 1);
        scanf("%f", &temp_K[i]);
    }

    fahrenheit(temp_K, temp_F);

    printf("\n°K\t°F\n");
    for(int i=0; i<24; i++)
        printf("%.2f\t%.2f\n", temp_K[i], temp_F[i]);
}