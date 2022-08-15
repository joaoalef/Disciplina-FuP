#include <stdio.h>

/*
Crie um programa que ajude o DETRAN a saber o total de recursos que foram
arrecadados com a aplicação de multas de trânsito.

O algoritmo deve ler as seguintes informações para cada motorista:
• número da carteira de motorista (de 1 a 4327);
• número de multas;
• valor de cada uma das multas.

Deve ser impresso o valor da dívida para cada motorista e ao final da leitura o
total de recursos arrecadados (somatório de todas as multas).

O programa deverá imprimir também o número da carteira do motorista que obteve o maior número de multas.

Obs.: O programa encerra ao ler a carteira de motorista de valor 0.
*/

int main(){
    char registro;

    printf("Deseja cadastrar um motorista <S / N>? ");
    scanf("%c", &registro);

    if(registro == 'S'){
        float valor_multa, total_motorista = 0, total = 0;
        int habilitacao, multas;

        while(registro == 'S'){
            printf("\nDigite o número da habilitação: ");
            scanf("%d", &habilitacao);

            int valido = habilitacao >= 1 && habilitacao <= 4327;

            if(valido){
                printf("Digite o número de multas: ");
                scanf("%d", &multas);

                for(int i=1; i<=multas; i++){
                    printf("Digite o valor da multa: ");
                    scanf("%f", &valor_multa);

                    total_motorista += valor_multa;
                }

                printf("\nDivida total do motorista: R$%.2f\n", total_motorista);

                total += total_motorista;

                printf("\nDeseja cadastrar um motorista <S / N>? ");
                getchar();
                scanf("%c", &registro);

                if(registro == 'N') printf("\nPrograma encerrado.");
            }

            else if(!valido) printf("\nNúmero de carteira inválido. Tente novamente.\n");
        }

        printf("\nTotal de recursos arrecadados pelo DETRAN: R$%.2f", total);

        return 0;
    }

    else printf("\nPrograma encerrado.");

    return 0;
}