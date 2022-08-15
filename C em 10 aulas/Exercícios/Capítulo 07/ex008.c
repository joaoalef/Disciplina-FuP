#include <stdio.h>

/*
Faça um programa que leia o raio de um circulo e imprima o perímetro e a área.
Para fazer os cálculos, implemente duas funções, cada uma deve realizar um cálculo especifico conforme solicitado.

Utilize as fórmulas a seguir:

    perimetro = 2 x pi x raio
    area = pi x raio²
*/

float perimetro(float r){
    return 2 * 3.14 * r;
}

float area(float r){
    return 3.14 * (r * r);
}

void main(){
    float raio;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    printf("\nO perímetro do circulo é: %.1f", perimetro(raio));
    printf("\nA área do perímetro é: %.1f", area(raio));
}