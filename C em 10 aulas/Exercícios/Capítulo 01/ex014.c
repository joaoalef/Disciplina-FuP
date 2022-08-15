#include <stdio.h>

/*
Faça um programa em C que leia a base e a altura de um retângulo
e imprima o perímetro (base + altura) e a área (base * altura).
*/

int main(){
    float base;
    float altura;
    float perimetro;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    perimetro = base * 2 + altura * 2;

    printf("O perímetro deste retângulo é: %.2f", perimetro);

    return 0;
}