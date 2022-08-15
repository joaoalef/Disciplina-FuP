#include <stdio.h>

/*
Crie um programa em C que imprima os 20 primeiros termos da série de Fibonacci.

Observação: os dois primeiros termos desta série são 1 e 1 e os demais são gerados
a partir da soma dos anteriores. Exemplo:

• 1 + 1 = 2, terceiro termo;
• 1 + 2 = 3, quarto termo, etc.
*/

int main(){
    int termo1 = 0;
    int termo2 = 1;
    int ajuda;

    for(int i=1; i<=20; i++){
        ajuda = termo2;

        termo2 = termo1 + termo2;

        printf("%d\n", termo2);

        termo1 = ajuda;
    }

    return 0;
}