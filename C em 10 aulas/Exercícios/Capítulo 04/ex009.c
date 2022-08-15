#include <stdio.h>

/*
Faça um programa em C que leia dois conjuntos de números inteiros, tendo
cada um 10 elementos. Ao final o programa deve listar os elementos comuns aos
conjuntos.
*/

int main(){
    int vet1[10];
    int vet2[10];
    int comuns[10];
    int cont = 0;
    int existe = 0;

    printf("Digite os valores do primeiro conjunto:\n");
    for(int i=0; i<10; i++) scanf("%d", &vet1[i]);

    printf("\nDigite os valores do segundo conjunto:\n");
    for(int i=0; i<10; i++) scanf("%d", &vet2[i]);

    for(int i=0; i<10; i++)

        for(int j=0; j<10; j++)

            if(vet1[i] == vet2[j]){
                comuns[cont++] = vet1[i];
                existe = 1;
                break;
            }

    if(existe){
        printf("Valore em comum entre os 2 conjuntos:");

        for(int i=0; i<cont; i++) 
            printf("%d\n", comuns[i]);
    }

    else if(!existe)
        printf("Não há valores em comum entre os 2 conjuntos.");

    return 0;
}