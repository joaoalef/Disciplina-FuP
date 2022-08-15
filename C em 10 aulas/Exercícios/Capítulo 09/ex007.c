#include <stdio.h>

/*
Considere um vetor de 10 elementos, contendo valores inteiros.
Faça um programa que leia os valores para preencher esse vetor,
após a leitura o programa deve invocar uma função
que calcule e devolva as frequências absoluta e relativa desses valores no conjunto.

OBS:
    a frequência absoluta de um valor é o número de vezes que esse valor aparece no conjunto de dados;
    a frequência relativa é a frequência absoluta dividida pelo número total de dados.
    
Utilize outros dois vetores para armazenar as frequências relativas e absolutas e ao final do programa,
imprima de forma tabulada os números e suas frequências absoluta e relativa.
*/

void frequencias(int *vet, int *absoluta, float *relativa){
    int aux;

    for (int i = 0; i < 10; i++){
        for (int j = i + 1; j < 10; j++){
            if (vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }

        absoluta[i] = 0;
    }

    for(int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            if(vet[i] == vet[j])
                absoluta[i]++;

    for(int i = 0; i < 10; i++)
        relativa[i] = absoluta[i] / 10.0;
}

void main(){
    int vet[10];
    int absoluta[10];
    float relativa[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &vet[i]);
    }

    frequencias(vet, absoluta, relativa);

    printf("\nIMPRIMINDO DADOS:\n\nNÚMERO\tABSOLUDA\tRELATIVA\n");
    for(int i = 0; i < 10; i++){
        printf("%d\t%d\t\t%.2f\n", vet[i], absoluta[i], relativa[i]);
    }
}