#include <stdio.h>

// Faça um programa que armazene 10 letras em um vetor e imprima uma listagem numerada

int main(){
    char letras[10];

    printf("Digite 10 letras:\n");
    for(int i = 0; i < 10; i++){
        scanf("%c", &letras[i]);
        getchar();
    }

    printf("Lista com as letras numeradas:\n");
    for(int i = 0; i < 10; i++)
        printf("%d° letra: %c \n", i+1, letras[i]);
    
    return 0;
}