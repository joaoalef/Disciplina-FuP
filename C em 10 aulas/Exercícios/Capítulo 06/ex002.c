#include <stdio.h>
#include <math.h>

/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das coordenadas, posição (0, 0).

Para realizar o cálculo, utilize a fórmula a seguir:

d = raiz de (Xb - Xa)² + (Yb - Ya)²

Em que:
• d = distância entre os pontos A e B
• X = coordenada X em um ponto
• Y = coordenada Y em um ponto
*/

typedef struct c{
    int x;
    int y;
} coord;

void main(){
    coord p1;
    float resultado;

    printf("Digite o ponto X: ");
    scanf("%d", &p1.x);

    printf("Digite o ponto Y: ");
    scanf("%d", &p1.y);

    resultado = sqrt(pow(p1.x - 0, 2) + pow(p1.y - 0, 2));

    printf("A distância até a coordenada inicial (0, 0) é: %.1fkm", resultado);
}