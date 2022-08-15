#include <stdio.h>

/*
Faça um programa em C que leia o valor de um ângulo em graus e o converta,
utilizando uma função, para radianos e ao final imprima o resultado.

Veja a fórmula de cálculo a seguir:
    • rad = (ang x pi) / 180

Em que:
    • rad = ângulo em radianos
    • ang = ângulo em graus
    • pi = número do pi
*/

float rad(float angulo){
    return (angulo * 3.14) / 180.0;
}

void main(){
    float angulo;

    printf("Digite o valor do ângulo em graus: ");
    scanf("%f", &angulo);

    printf("\nO mesmo valor, em radianos é: %.2f", rad(angulo));
}