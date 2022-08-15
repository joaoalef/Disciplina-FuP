#include <stdio.h>

/*
Faça um programa que armazene 8 números em um vetor e imprima todos os números.
Ao final, imprima o total de números múltiplos de seis.
*/

int main(){
    int vet[8];
    int divisivel = 0;

    printf("Digite 8 inteiros:\n");
    for(int i=0; i<8; i++) scanf("%d", &vet[i]);

    for(int i=0; i<8; i++) if(vet[i] % 6 == 0) divisivel++;

    for(int i=0; i<8; i++) printf("\n- %d", vet[i]);

    printf("\n\nTotal de números múltiplos de seis: %d", divisivel);

    return 0;
}