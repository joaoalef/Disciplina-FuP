#include <stdio.h>

/*
Crie um programa em C para ler um conjunto de 100 números reais e informe:
• quantos números lidos são iguais a 30
• quantos são maior que a média
• quantos são iguais a média
*/

int main(){
    float conj[10];
    float media = 0;
    int maior_media = 0;
    int igual_media = 0;
    int maior_30 = 0;

    printf("Digite os 100 valores do conjunto:\n");
    for(int i = 0; i < 10; i++){
        scanf("%f", &conj[i]);
        media += conj[i];
    }

    media /= 10;

    for(int i = 0; i < 10; i++){
        if(conj[i] == media) igual_media++;
        if(conj[i] > media) maior_media++;
        if(conj[i] == 30) maior_30++;
    }

    printf("\nMédia: %f\n", media);
    printf("\nQuantidade de números maiores que 30: %d", maior_30);
    printf("\nQuantidade de números maiores que a média: %d", maior_media);
    printf("\nQuantidade de números iguais a média: %d", igual_media);

    return 0;
}