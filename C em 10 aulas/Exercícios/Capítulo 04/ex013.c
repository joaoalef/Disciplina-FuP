#include <stdio.h>

/*
Construa um programa que realize as reservas de passagens áreas de uma companhia.

O programa deve permitir cadastrar o número de 10 voos e definir a quantidade de lugares disponíveis para cada um.

Após o cadastro, leia vários pedidos de reserva,
constituídos do número da carteira de identidade do cliente e do número do voo desejado.

Para cada cliente, verificar se há possibilidade no voo desejado.
Em caso afirmativo, imprimir o número da identidade do cliente e o número do voo,
atualizando o número de lugares disponíveis.

Caso contrário, avisar ao cliente a inexistência de lugares.
A leitura do número 0 (zero) para o voo desejado indica o término da leitura de reservas.
*/

int main(){
    int voo[10];
    int lugares[10]; 
    int resposta;

    printf("-----CADASTRO DOS VOOS-----");
    for(int i=0; i<10; i++){
        printf("\nDigite o número do %d° voo: ", i + 1);
        scanf("%d", &voo[i]);

        printf("Digite a quantidade de lugares disponíveis para este voo: ");
        scanf("%d", &lugares[i]);
    }

    printf("\n-----CADASTRO DE RESERVAS-----");

    printf("\nDeseja pedir uma reserva <1 - Sim | 2 - Não>? ");
    scanf("%d", &resposta);

    while(resposta == 1){
        int numero;
        int identidade;
        int encontrado = 0;

        printf("\nDigite o número de sua identidade: ");
        scanf("%d", &identidade);

        printf("Digite o número do voo: ");
        scanf("%d", &numero);

        for(int i=0; i<10; i++){

            if(numero == voo[i]){
                encontrado = 1;

                if(lugares[i] > 0){
                    lugares[i] = lugares[i] - 1;
                    printf("\nLugar no voo reservado com sucesso.");
                    printf("\nNúmero do voo: %d", voo[i]);
                    printf("\nIdentidade do cliente: %d", identidade);
                    printf("\nLugares disponíveis: %d", lugares[i]);
                }

                else if(lugares[i] == 0)
                    printf("\nVoo lotado.");
            }

        }

        if(encontrado = 0) printf("\nVoo não encontrado.");

        printf("\n\nDeseja pedir uma reserva <1 - Sim | 2 - Não>? ");
        scanf("%d", &resposta);
    }

    if(resposta == 0) printf("Programa encerrado.");

    return 0;
}