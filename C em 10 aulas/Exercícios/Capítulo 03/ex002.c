#include <stdio.h>

/*
Faça um programa que imprima todos os números pares de 100 até 1.
*/

int main(){
    int i;

    for(i=1; i<=100; i++){
        if(i % 2 == 0) printf("%d\n", i);
    }

    return 0;
}