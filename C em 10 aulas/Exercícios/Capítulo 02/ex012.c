#include <stdio.h>

/* 
Faça um programa que leia a idade de uma pessoa e informe:
• Se é maior de idade
• Se é menor de idade
• Se é maior de 65 anos
*/

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    int valido = idade > 0;

    int demaior = idade >= 18;
    int demenor = idade < 18;
    int mais65 = idade >= 65;

    if(valido){
    if(demaior && mais65)
        printf("Você é maior de idade e possui 65 anos ou mais.");

    else if(demaior && !mais65)
        printf("Você é maior de idade e possui menos que 65 anos.");

    else if(demenor)
        printf("Você é menor de idade.");
    }

    else
        printf("Idade inválida");
        
    return 0;
}