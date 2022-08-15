#include <stdio.h>

/*
A prefeitura contratou uma firma especializada para manter os níveis de poluição
considerados ideais para um país do 1º mundo. As indústrias, maiores responsáveis pela poluição,
foram classificadas em três grupos. Sabendo-se que a escala
utilizada varia de 0,05 e que o índice de poluição aceitável é até 0,25, fazer um
programa que possa imprimir intimações de acordo com o índice e a tabela a
seguir:
Indice | Indústrias que receberão intimação
       |
0,3    | 1º gurpo
0,4    | 1º e 2º grupos
0,5    | 1º, 2º e 3º grupos
*/

int main(){
    float indice;

    printf("Digite o índice de poluição: ");
    scanf("%f", &indice);

    if(indice >= 0.5) printf("\nSuspender atividades dos grupos: 1, 2 e 3.");
    else if(indice >= 0.4) printf("\nSuspender atividades dos grupos: 1 e 2.");
    else if(indice >= 0.3) printf("\nSuspender atividades dos grupos: 1.");
    else printf("\níndice de poluição aceitável para todos os grupos.");
    
    return 0;
}