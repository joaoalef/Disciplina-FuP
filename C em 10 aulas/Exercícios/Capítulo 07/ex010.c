#include <stdio.h>
#include <math.h>

/*
Faça um programa que leia os lados a, b e c de um paralelepípedo e imprima a diagonal.
Para fazer o cálculo, implemente uma função.

Utilize a fórmula a seguir

    diagonal = raiz de a² + b² + c²
*/

float diagonal(float a, float b, float c){
    return sqrt(a * a + b * b + c * c);
}

void main(){
    float a, b, c;

    printf("--------Digite os lados de um paralelepípedo--------\n");
    printf("Digite o valor do lado a: ");
    scanf("%f", &a);
    printf("Digite o valor do lado b: ");
    scanf("%f", &b);
    printf("Digite o valor do lado c: ");
    scanf("%f", &c);

    printf("\nA diagonal deste paralelepípedo é: %.1f", diagonal(a, b, c));
}