#include <stdio.h>

/*
Faça um programa em C que calcule a conversão entre graus centígrados e Fahrenheit.
Para isso, leia o valor em centígrados e calcule com base na fórmula a seguir.
Após calcular o programa deve imprimir o resultado da conversão.
Em que:
F = (9.C+160)/5
F = Fahrenheit
C = Celsius
*/

int main(){
    float celsius, fahrenheit;

    printf("Digite o valor em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160) / 5;

    printf("O valor equivalente, em fahrenheit é: %.2f", fahrenheit);

    return 0;
}