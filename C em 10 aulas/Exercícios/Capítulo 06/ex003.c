#include <stdio.h>
#include <math.h>

/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles,
considere a mesma fórmula do exercício anterior.

d = raiz de (Xb - Xa)² + (Yb - Ya)²

Em que:
• d = distância entre os pontos A e B
• X = coordenada X em um ponto
• Y = coordenada Y em um ponto
*/

typedef struct p{
    int x;
    int y;
} coord;

void main(){
    coord p1, p2;
    float resultado;

    printf("Digite o ponto x da posição A: ");
    scanf("%d", &p1.x);
    printf("Digite o ponto y da posição A: ");
    scanf("%d", &p1.y);
    printf("Digite o ponto x da posição B: ");
    scanf("%d", &p2.x);
    printf("Digite o ponto y da posição B: ");
    scanf("%d", &p2.y);

    resultado = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    printf("A distância entre os pontos (%d, %d) e (%d, %d) é: %.1fkm.", p1.x, p1.y, p2.x, p2.y, resultado);
}