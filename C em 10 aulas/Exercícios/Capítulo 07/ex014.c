#include <stdio.h>

/*
Faça um programa que verifique quantas vezes um número é divisível por outro.
A função deve receber dois parâmetros, o dividendo e o divisor.
Ao ler o divisor, é importante verificar se ele é menor que o dividendo. Ao final imprima o resultado.
*/

int total(int dividendo, int divisor){
    int total = 0;
    
    while(dividendo % divisor == 0){
        dividendo /= divisor;
        total++;
    }

    return total;
}

void main(){
    int dividendo;
    int divisor;

    printf("Informe o dividendo: ");
    scanf("%d", &dividendo);
    printf("Informe o divisor: ");
    scanf("%d", &divisor);

    if(dividendo >= divisor)
        printf("\nO número %d é divisível por %d um total de: %d", dividendo, divisor, total(dividendo, divisor));
    else
        printf("O dividendo deve ser maior ou igual ao divisor.");
}