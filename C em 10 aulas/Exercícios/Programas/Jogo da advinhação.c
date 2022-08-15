#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int chave = rand() % 1024 + 1;

    int chute;
    int tentativas = 0;

    printf("______________Jogo da advinhação______________\n");
    printf("\nFoi gerado uma chave aleatória entre 1 e 1024.");
    printf("\nVocê tem que chutar um número dentro desse intervalo até acertar a chave gerada.");

    do{
        printf("\n\nDigite sua tentativa: ");
        scanf("%d", &chute);

        tentativas++;

        if(chute > chave) printf("Errado. Chute maior que a chave.");
        else if(chute < chave) printf("Errado. Chute menor que a chave.");
        else printf("Correto. O chute foi igual a chave.");

    } while(chute != chave);

    printf("\n\nNúmero de tentativas: %d", tentativas);

    return 0;
}