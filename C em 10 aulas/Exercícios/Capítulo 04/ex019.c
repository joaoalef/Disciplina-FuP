#include <stdio.h>

/*
Suponha dois vetores de 30 elementos cada, contendo: código e telefone.
Faça um programa que permita buscar pelo código e imprimir o telefone.
*/

int main(){
    int telefone[30];
    int codigo[30];
    int resposta;
    int busca;

    for(int i = 0; i < 30; i++){
        printf("Digite o telefone: ");
        scanf("%d", &telefone[i]);

        printf("Digite o respectivo código: ");
        scanf("%d", &codigo[i]);

        printf("\n");
    }

    printf("-----BUSCA DE TELEFONES POR CÓDIGO-----");
    do{
        printf("\nDigite o codigo para procurar: ");
        scanf("%d", &busca);

        for (int i = 0; i < 30; i++){
            
            if (codigo[i] == busca){
                printf("Telefone: %d\n",telefone[i]);
                break;
            }
        }

        printf("\nDeseja pesquisar outro número? <1 - Sim / 2 - Não> ");
        scanf("%d", &resposta);
    } while(resposta == 1);

    if(resposta == 2)
        printf("\nPrograma encerrado.");

    return 0;
}
