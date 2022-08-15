#include <stdio.h>

/*
Faça um programa em C que armazene 15 números inteiros em um vetor e depois
permita que o usuário digite um número inteiro para ser buscado no vetor, se
for encontrado o programa deve imprimir a posição desse número no vetor, caso
contrário, deve imprimir a mensagem: "Nao encontrado!".
*/

int main(){
    int vet[15];
    int chave;
    int encontrado = 0;

    for(int i=0; i<15; i++){
        printf("Digite um valor para a posição %d do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("\nDigite uma chave de busca: ");
    scanf("%d", &chave);

    for(int i=0; i<15; i++)
        if(chave == vet[i]){
            printf("\nEncontrado na posição %d", i + 1);
            encontrado = 1;
        }

    if(encontrado == 0) printf("\nValor não encontrado.");

    return 0;
}