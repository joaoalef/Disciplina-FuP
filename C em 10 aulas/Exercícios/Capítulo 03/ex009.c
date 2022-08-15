#include <stdio.h>

/*
Cada espectador respondeu a um questionário no qual constava sua idade e a sua opinião em relação ao filme:
Excelente - 3;
Bom - 2;
Regular - 1.

Criar um programa que receba a idade e a opinião de 20 espectadores, calcule e imprima:

• A média das idades das pessoas que responderam excelente;
• A quantidade de pessoas que responderam regular;
• A percentagem de pessoas que responderam bom entre todos os expectadores analisados.
*/

int main(){
    int i;
    int idade;
    int opniao;
    int regular = 0;
    int bom = 0;
    int excelente = 0;
    float media_idade_excelente = 0;
    float percent_bom = 0;

    for(i=1; i<=20; i++){
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        
        printf("\n1 - Regular.\n2 - Bom.\n3 - Excelente.");
        printf("\nDigite sua opção: ");
        scanf("%d", &opniao);

        printf("\n");

        if(opniao == 1) regular++;

        else if(opniao == 2) bom++;

        else if(opniao == 3){
            media_idade_excelente += idade;
            excelente++;
        }
    }

    media_idade_excelente = media_idade_excelente / excelente;
    percent_bom = (100 * bom ) / 20;

    printf("\nMédia de idade das pessoas que responderam excelente: %f", media_idade_excelente);
    printf("\nQuantidade de pessoas que responderam regular: %d", regular);
    printf("\nPorcentagem de pessoas que responderam bom entre todos os expectadores analisados: %.2f%%", percent_bom);

    return 0;
}