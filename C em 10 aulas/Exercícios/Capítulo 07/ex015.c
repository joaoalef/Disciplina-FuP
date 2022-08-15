#include <stdio.h>

/*
Construa um programa em C que leia um caractere (letra) e, por meio de uma função,
retorne se este caractere é uma consoante ou uma vogal. Ao final imprima o resultado.
*/

char c_v(char letra){
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
        return 1;
    else
        return 0;
}

void main(){
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    int valido = (letra >= 65 && letra <= 90) || (letra >= 97 && letra <= 122);

    if(valido){
        if(c_v(letra) == 1)
            printf("\nA lebtra digitada é uma vogal.");
        else
            printf("\nA letra digitada é uma consoante.");
    }
}