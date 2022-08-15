#include <stdio.h>
#include <math.h>

/*
Faça um programa que leia o lado de um quadrado e imprima o perímetro, a área e a diagonal.
Para fazer o cálculo, implemente três funções, cada uma deve realizar um cálculo especifico conforme solicitado.

Utilize as fórmulas a seguir:

    perimetro = 4 x lado
    area = lado²
    diagonal = lado x raiz de 2
*/

float perimetro(float l){
    return l * 4.0;
}

float area(float l){
    return l * l;
}

float diagonal(float l){
    return l * sqrt(2);
}

void main(){
    float lado;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    printf("\nPerímetro do quadrado: %.1f", perimetro(lado));
    printf("\nÁrea do quadrado: %.1f", area(lado));
    printf("\nDiagonal do quadrado: %.1f", diagonal(lado));
}