#include <stdio.h>

/*
Faça um programa que leia a diagonal maior e a diagonal menor de um losango e imprima a área.
Para fazer o cálculo, implemente uma função.

Utilize a fórmula a seguir.

area = (diagonalMaior x diagonalMenor) / 2
*/

float area(float D, float d){
    return (d * D) / 2.0;
}

void main(){
    float d_maior;
    float d_menor;

    printf("Digite a diagonal maior do losango: ");
    scanf("%f", &d_maior);
    printf("Digite a diagonal menor do losango: ");
    scanf("%f", &d_menor);

    printf("\nA área do losango é: %.1f", area(d_maior, d_menor));
}