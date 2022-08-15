#include <stdio.h>

/*
Faça um programa em C que permita entrar com a idade de várias pessoas e imprima:
• total de pessoas com menos de 21 anos
• total de pessoas com mais de 50 anos
*/

int main(){
    int idade;
    int menos21 = 0;
    int mais50 = 0;

    do{
        printf("Digite a idade de uma pessoa: ");
        scanf("%d", &idade);

        if(idade <= 0) break;

        if(idade < 21) menos21++;
        if(idade > 50) mais50++;
    }
        while(idade > 0);

    printf("\nTotal de pessoas com menos de 21 anos: %d", menos21);
    printf("\nTotal de pessoas com mais de 50 anos: %d", mais50);

    return 0;
}