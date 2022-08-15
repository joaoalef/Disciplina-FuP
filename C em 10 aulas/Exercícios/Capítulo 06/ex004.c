#include <stdio.h>
#include <math.h>

/*
Cria uma estrutura chamada retângulo.
Essa estrutura deverá conter o ponto superior esquerdo e o ponto inferior direito do retângulo.
Cada ponto é definido por uma estrutura Ponto, a qual contém as posições X e Y.
Faça um programa que declare e leia uma estrutura retângulo e exiba
a área e o comprimento da diagonal e o perímetro desse retângulo.
*/

typedef struct retangulo{
    float b;
    float h;
} retangulo;

float perimetro(float x, float y){
    return x * 2 + y * 2;
}

float area(float x, float y){
    return x * y;
}

float diagonal(float x, float y){
    return sqrt(x * x + y * y);
}

void main(){
    retangulo r;;

    printf("Digite a base do retângulo: ");
    scanf("%f", &r.b);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &r.h);

    printf("\n------------Medidas do retângulo------------");
    printf("\nPerímetro: %.1f", perimetro(r.b, r.h));
    printf("\nÁrea: %.1f", area(r.b, r.h));
    printf("\nDiagonal: %.1f", diagonal(r.b, r.h));
}