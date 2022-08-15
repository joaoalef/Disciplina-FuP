#include <stdio.h>

/*
Faça um programa em C que calcule, por meio de uma função recursiva,
a * b usando a adição, em que a e b são inteiros não-negativos
*/

int produto(int a, int b){
    if(b == 0)
        return 0;
    else
        return a + produto(a, b - 1);
}

void main(){
    int a, b;

    printf("Digite o primeiro termo: ");
    scanf("%d", &a);
    printf("Digite o segundo termo: ");
    scanf("%d", &b);

    printf("O produto dos dois é: %d", produto(a, b));
}