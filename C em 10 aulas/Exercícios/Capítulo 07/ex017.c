#include <stdio.h>
#include <string.h>

/*
Implemente um programa que leia uma mensagem e um caractere.
Após a leitura, o programa deve, por meio de função, retirar todas as
ocorrências do caractere informado na mensagem colocando * em seu lugar.
A função deve também retornar o total de caracteres retirados.
Ao final, o programa deve imprimir a frase ajustada e a quantidade de caracteres substituídos
*/

int cont = 0;

char string(char frase[101], char letra){
    int tamanho = strlen(frase);

    for(int i = 0; i < tamanho; i++){
        if(frase[i] == letra || frase[i] == letra + 32 || frase[i] == letra - 32){
            frase[i] = '*';
            cont++;
        }
    }

    return frase[101];
}

void main(){
    char frase[101];
    char letra;

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase);
    printf("Agora digite uma letra para retirar da frase:\n");
    scanf(" %c", &letra);
    
    frase[101] = string(frase, letra);
    
    printf("\nSubstituindo a letra %c por '*', a frase fica:\n%s", letra, frase);
    printf("\nNúmero de substituições: %d", cont);
}