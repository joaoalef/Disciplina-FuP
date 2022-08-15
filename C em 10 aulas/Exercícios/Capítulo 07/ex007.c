#include <stdio.h>
#include <math.h>

/*
Faça um programa que leia a base e a altura de um retângulo e imprima o perímetro, a área e a diagonal.
Para fazer os cálculos, implemente três funções, cada uma deve realizar um cálculo especifico conforme solicitado.

Utilize as fórmulas a seguir:

    perimetro = 2 × (base + altura)
    area = base × altura
    diagonal = raiz quadrada de base² + altura²
*/

float perimetro(float b, float a){
    return 2 * b + 2 * a;
}

float area(float b, float a){
    return b * a;
}

float diagonal(float b, float a){
    return sqrt(b * b + a * a);
}

void main(){
    float base;
    float altura;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    printf("\nPerímetro do retângulo: %.1f", perimetro(base, altura));
    printf("\nÁrea do retângulo: %.1f", area(base, altura));
    printf("\nDiagonal do retângulo: %.1f", diagonal(base, altura));
}