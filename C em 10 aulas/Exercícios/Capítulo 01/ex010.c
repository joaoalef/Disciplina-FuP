#include <stdio.h>

/*
Faça um programa em C que leia três números reais e calcule a média aritmética destes números.
Ao final, o programa deve imprimir o resultado do cálculo.
*/

int main(){
    float n1, n2, n3, media;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    printf("Digite o terceiro número: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("\nA média aritimética desses 3 números é igual a: %.2f", media);

    return 0;
}