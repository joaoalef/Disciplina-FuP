#include <stdio.h>

/*
Faça um programa que verifique se um número é primo por meio de um função.
Ao final imprima o resultado
*/

int primo(int n){
    for(int i=2; i<n; i++)
        if(n % i == 0){
            return 1;
            break;
        }
}

void main(){
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(primo(num) == 1)
        printf("\nO número digitado não é primo.");
    else
        printf("\nO número digitado é primo.");
}