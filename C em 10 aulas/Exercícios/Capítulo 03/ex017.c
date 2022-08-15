#include <stdio.h>

/*
Crie um programa em C que possa ler um conjunto de pedidos de compra e calcule o valor total da compra.
Cada pedido é composto pelos seguintes campos:

• número de pedido.
• data do pedido (dia, mês, ano)
• preço unitário
• quantidade
*/

int main(){
    int numero_pedido;
    int dia, mes, ano;
    int quantidade;
    float preco_unitario;
    float custo;
    char registro;

    printf("Deseja registrar um pedido <S / N>? ");
    scanf("%c", &registro);

    if(registro == 'N') printf("Programa encerrado.");

    while(registro == 'S'){
        printf("\nDigite o numero do pedido: ");
        scanf("%d", &numero_pedido);

        printf("Digite a data <dia/mes/ano>: ");
        scanf("%d/%d/%d", &dia, &mes, &ano);

        printf("Digite o preço unitário do produto: ");
        scanf("%f", &preco_unitario);

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidade);

        custo = preco_unitario * quantidade;

        printf("Custo: R$%.2f", custo);

        printf("\n\nDeseja registrar um pedido <S / N>? ");
        getchar();
        scanf("%c", &registro);

        if(registro == 'N') printf("Programa encerrado.");
    }

    return 0;
}