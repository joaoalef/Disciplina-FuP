#include <stdio.h>

/*
Faça um programa que calcule o imposto de renda de um grupo de contribuintes, considerando que:
a) os dados de cada contribuinte (CIC, número de dependentes e renda bruta anual)
serão fornecidos pelo usuário via teclado;

b) para cada contribuinte será feito um abatimento de R$600 por dependente;

c) a renda líquida é obtida diminuindo-se o abatimento com os dependentes da renda bruta anual;

d) para saber quanto o contribuinte deve pagar de imposto, utiliza-se a tabela a seguir:
Renda Líquida      | Imposto
                   |
até R$1000         |  Isento
de R$1001 a R$5000 |   15%
acima de R$5000    |   25%

e) o valor de CIC igual a zero indica final de dados;

f ) o programa deverá imprimir, para cada contribuinte, o número do CIC e o imposto a ser pago;

g) ao final o programa deverá imprimir o total do imposto arrecadado pela
Receita Federal e o número de contribuintes isentos;

h) leve em consideração o fato de o primeiro CIC informado poder ser zero.
*/

int main(){
    float rendab_anual, rendal_anual, imposto = 0, arrecadado = 0;
    int CIC, n_dependentes, isentos = 0;

    printf("Digite o número do CIC do contribuinte: ");
    scanf("%d", &CIC);

    if(CIC == 0) printf("\nPrograma encerrado.\n");

    while(CIC != 0){
        printf("Digite o número de dependentes: ");
        scanf("%d", &n_dependentes);

        printf("Digite o valor da renda bruta anual: ");
        scanf("%f", &rendab_anual);

        rendal_anual = rendab_anual - (n_dependentes * 600);

        int isento = rendal_anual <= 1000;
        int quinze = rendal_anual > 1000 && rendal_anual <= 5000;
        int vinte5 = rendal_anual > 5000;

        if(isento) isentos++;
        else if(quinze) imposto = rendal_anual * 0.15;
        else if(vinte5) imposto = rendal_anual * 0.25;

        arrecadado += imposto;

        printf("\nNúmero do CIC: %d", CIC);
        printf("\nImposto a ser pago: R$%.2f\n", imposto);

        printf("\nDigite o número do CIC do contribuinte: ");
        scanf("%d", &CIC);

        if(CIC == 0) printf("\nPrograma encerrado.\n");
    }


    printf("\nValor total arrecadado pela Receita Federal: R$%.2f", arrecadado);
    printf("\nNúmero de isentos: %d", isentos);
}