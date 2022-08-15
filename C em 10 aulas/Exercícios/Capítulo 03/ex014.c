#include <stdio.h>

/*
Faça um programa que leia vários números inteiros e apresente o fatorial de cada
número. O algoritmo encerra quando se digita um número menor do que 1
*/

int main(){
    int num;

    do{
        int fatorial = 1;
        printf("Digite um número: ");
        scanf("%d", &num);

        if(num > 1){
            for(int i=num; i>1; i--) fatorial *= i;

            printf("Fatorial: %d\n\n", fatorial);
        }

        else break;
    }
        while(num > 0);

    return 0;
}