#include <stdio.h>

/*
Faça um programa em C que calcule o valor de uma prestação em atraso.
Para isso, o programa deve ler o valor da prestação vencida, a taxa periódica de juros e o período de atraso.
Ao final, o programa deve imprimir o valor da prestação atrasada, o período de atraso,
os juros que serão cobrados pelo período de atraso,
o valor da prestação acrescido dos juros. Considere juros simples.
*/

int main(){
    float prestacao;
    float taxa;
    float juros;
    int periodo;

    printf("Digite o valor da prestação vencida (reais): ");
    scanf("%f", &prestacao);
    printf("Digite a taxa periódica de juros (porcentagem): ");
    scanf("%f", &taxa);
    printf("Digite o tempo de atraso (meses): ");
    scanf("%d", &periodo);

    juros = ((taxa / 100) * prestacao) * periodo;

    printf("\nValor prestação atrasada: R$%.2f", prestacao);
    printf("\nPeríodo de atrasa: %d", periodo);
    printf("\nJuros cobrados: R$%.2f", juros);

    prestacao = prestacao + juros;

    printf("\nTotal a pagar: R$%.2f", prestacao);
    
    return 0;
}