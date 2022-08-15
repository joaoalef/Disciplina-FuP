#include <stdio.h>

/*
Faça um programa que leia e armazene vários números, até digitar o número 0.
Imprimir quantos números iguais ao último número foram lidos.
O limite de números é 100.
*/

int main(){
    int num;
    int iguais = 0;
    int cont = 0;
    int vet[100];
    int ultimo;

    for(int i=0; i<100; i++){
        printf("Digite um número: ");
        scanf("%d", &vet[i]);

        if(vet[i] == 0) break;

        else{
            ultimo = vet[i];
            cont++;
        }
    }

    for(int i=0; i<cont; i++) if(vet[i] == ultimo) iguais++;

    printf("\nQuantidade de números iguais ao anterior: %d\n", iguais);

    return 0;
}