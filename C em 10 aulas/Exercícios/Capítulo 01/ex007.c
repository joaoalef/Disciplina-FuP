#include <stdio.h>

// Faça um programa em C que leia o nome o endereço e o telefone de um cliente e ao final, imprima esses dados.

int main(){
    char nome[50], telefone[50], endereco[100];

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    printf("Digite seu telefone: ");
    fgets(telefone, 50, stdin);
    printf("Digite seu endereço: ");
    fgets(endereco, 100, stdin);

    printf("\nNome: %s", nome);
    printf("Telefone: %s", telefone);
    printf("Endereço: %s", endereco);

    return 0;
}