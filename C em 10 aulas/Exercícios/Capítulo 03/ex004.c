#include <stdio.h>

/*
Faça um programa em C que permita entrar com o nome, a idade e o sexo de 20
pessoas. O programa deve imprimir o nome da pessoa se ela for do sexo masculino
e tiver mais de 21 anos
*/

int main(){
    char nome[50];
    char sexo;
    int idade;
    int i;

    for(i=1; i<=20; i++){
        printf("Digite seu nome: ");
        fgets(nome, 50, stdin);

        printf("Digite seu sexo <M / F>: ");
        scanf("%c", &sexo);
        getchar();

        printf("Digite sua idade: ");
        scanf("%d", &idade);
        getchar();

        if(sexo == 'M' && idade > 21) printf("Nome: %s", nome);
    }

    return 0;
}