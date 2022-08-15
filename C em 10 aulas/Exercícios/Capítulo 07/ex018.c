#include <stdio.h>

/*
Faça um programa que leia um vetor com tamanho 10 de números inteiros.
Após ler, uma função deve verificar se o vetor está ordenado, de forma crescente ou decrescente, ou se não está ordenado.
Imprimir essa resposta no final do programa 
*/

int verificar(int vetetor[]){
    for(int i=0; i <= 8; i++){
        int count = 0;
        if(vetetor[i] >= vetetor[i+1])
           count++;
           if (count = 8){
               printf("crescente");
               break;
           }
        else{
            printf("não ordenado de forma crescente");
            break;
        }
    }
    
    for(int i=9 ; i >= 0 ; i--){
        int count = 0;
        if(vetetor[i] <= vetetor[i-1]){
            count++;
            if (count = 9){
               printf("decrescente");
               break;
           }
        }else {
            printf("não ordenado de forma decrescente");
            break;
        }
    }
    return 1;
}

void main(){
    int vet[10];

    printf("Digite 10 numeros para o vetor:\n");
    for(int i=0; i<10; i++){
        scanf("%d", &vet[i]);
    }
    if(verificar(vet[10]))
        printf("sim");
    else
        printf("nao");
}