#include <stdio.h>

/*
Faça um programa que receba as notas de três provas e calcule a média.
Para o cálculo, escreva uma função. O programa deve imprimir a média ao final.
*/

float media(float ap1, float ap2, float ap3){
    return (ap1 + ap2 + ap3) / 3.0;
}

void main(){
    float ap1;
    float ap2;
    float ap3;

    printf("Digite a nota da AP1: ");
    scanf("%f", &ap1);
    printf("Digite a nota da AP2: ");
    scanf("%f", &ap2);
    printf("Digite a nota da AP3: ");
    scanf("%f", &ap3);

    printf("\nA média das três notas é: %.1f", media(ap1, ap2, ap3));
}