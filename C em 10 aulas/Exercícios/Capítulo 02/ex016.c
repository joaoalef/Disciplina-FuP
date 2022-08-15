#include <stdio.h>

/*
A confederação brasileira de natação irá promover eliminatórias para o próximo
mundial. Faça um programa em C que receba a idade de um nadador e imprima
a sua categoria segundo a tabela a seguir:

Infantil A 5 - 7 anos
Infantil B 8 - 10 anos
Juvenil A 11 - 13 anos
Juvenil B 14 - 17 anos
Sênior maiores de 18 anos
*/

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    int infantilA = idade >= 5 && idade <= 7;
    int infaltilB = idade >= 8 && idade <= 10;
    int juvenilA = idade >= 11 && idade <= 13;
    int juvenilB = idade >= 14 && idade < 18;
    int senior = idade >= 18;

    if(infantilA)
        printf("Sua categoria é: Infaltil A");

    else if(infaltilB)
        printf("Sua categoria é: Infaltil B");

    else if(juvenilA)
        printf("Sua categoria é: Juvenil A");

    else if(juvenilB)
        printf("Sua categoria é: Juvenil B");
    
    else if(senior)
        printf("Sua categoria é: Sênior");

    else
        printf("Sem categoria");

    return 0;
}