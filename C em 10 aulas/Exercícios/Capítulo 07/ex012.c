#include <stdio.h>

/*
Faça um programa que leia os catetos (dois catetos) de um triângulo retângulo e imprima a hipotenusa.
Para fazer o cálculo, implemente uma função.

Utilize a fórmula a seguir

    hipotenusa = raiz de cateto1² + cateto2²
*/

float hipotenusa(float c1, float c2){
    return c1 * c1 + c2 * c2;
}

void main(){
    float cateto1;
    float cateto2;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);
    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    printf("\nA hipotenusa do triângulo retângulo é: %.1f", hipotenusa(cateto1, cateto2));
}