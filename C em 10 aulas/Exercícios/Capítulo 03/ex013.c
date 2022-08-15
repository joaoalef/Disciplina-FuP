#include <stdio.h>

/*
Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de consumo.
Para cada consumidor, são digitados os seguintes dados:

• número do consumidor

• quantidade de kWh consumidos durante o mês

• tipo (código) do consumidor:
    1-residencial, preço em reais por kWh = 0,3

    2-comercial, preço em reais por kWh = 0,5

    3-industrial, preço em reais por kWh = 0,7

Os dados devem ser lidos até que seja encontrado o consumidor com número 0.
O programa deve calcular e imprimir:

• O custo total para cada consumidor

• O total de consumo para os três tipos de consumidor

• A média de consumo dos tipos 1 e 2
*/

int main(){
    int numero_consumidor;
    int kwh_consumidos;
    int tipo_consumidor;
    int qtd_1_e_2 = 0;
    int kwh_1_e_2 = 0;
    int kwh_total = 0;
    float media_consumo_1_e_2 = 0;
    float custo_consumo = 0;

    do{
        printf("Digite o número do consumidor: ");
        scanf("%d", &numero_consumidor);
        if(numero_consumidor == 0)
            break;

        printf("Digite a quantidade de kWh consumidos durante o mês: ");
        scanf("%d", &kwh_consumidos);

        printf("Tipos de consumidor:");
        printf("\n1 - Residencial.");
        printf("\n2 - Comercial.");
        printf("\n3 - Industrial.");
        printf("\nDigite seu tipo: ");
        scanf("%d", &tipo_consumidor);

        kwh_total += kwh_consumidos;

        if(tipo_consumidor == 3) custo_consumo = kwh_consumidos * 0.7;

        else{
            kwh_1_e_2 += kwh_consumidos;
            qtd_1_e_2++;

            if(tipo_consumidor == 1) custo_consumo = kwh_consumidos * 0.3;
            else if(tipo_consumidor == 2) custo_consumo = kwh_consumidos * 0.5;
        }

        printf("\nCusto do consumo do consumidor %d: R$%.2f\n\n",numero_consumidor, custo_consumo);
    }
        
        while(numero_consumidor != 0);

    media_consumo_1_e_2 = kwh_1_e_2 / qtd_1_e_2;

    printf("\nTotal de consumo dos 3 tipos: %d", kwh_total);
    printf("\nMédia de consumo dos tipos 1 e 2: %.2f", media_consumo_1_e_2);

    return 0;
}