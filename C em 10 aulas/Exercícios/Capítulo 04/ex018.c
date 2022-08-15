#include <stdio.h>

/*
Faça um programa em C que permita entrar com dados para um vetor VET do tipo inteiro com 20 posições,
em que podem existir vários elementos repetidos.
Gere um vetor VET2 ordenado a partir do vetor VET e que terá apenas os elementos não repetidos.

*/

int main(){
    int vet1[20];
    int vet2[20];
    int aux;
    int cont=0;
    
    //lendo os dados
    printf("Digite os valores do conjunto:\n");
    for(int i = 0; i < 20; i++) scanf("%d", &vet1[i]);
    
    //Ordenando os dados
    for(int i = 0; i < 20 - 1; i++){
        
        for(int j = i + 1; j < 20; j++){
            
            if(vet1[i] > vet1[j]){
                aux = vet1[i];
                vet1[i] = vet1[j];
                vet1[j] = aux;
            }
        }
    }
    
    for(int i = 0; i < 20; i++){
        
        if(i == 0 | vet1[i - 1] != vet1[i]){
            vet2[cont] = vet1[i];
            cont++;
        }
    }
    
    //imprimindo os dados
    printf("\nVetor ordenado e sem elementos repetidos:\n");
    for(int i = 0; i < cont; i++) printf("%d \n", vet2[i]);
    
    return 0;
}
