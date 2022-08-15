#include <stdio.h>

/*
Crie um programa que leia o preço de compra e o preço de venda de 100 mercadorias (utilize vetores).
Ao final, o programa deverá imprimir quantas mercadorias proporcionam:

• Lucro < 10%
• 10% <= Lucro <= 20%
• Lucro > 20%
*/

int main(){
    float compra[1];
    float venda[1];
    float lucro;
    int lucro_menos_10 = 0;
    int lucro_mais_20 = 0;
    int lucro_entre_10_20 = 0;
    
    for(int i=0; i<1; i++){
        printf("Digite o preço de compra da mercadoria: ");
        scanf("%f", &compra[i]);
        printf("Digite o preço de venda da mercadoria: ");
        scanf("%f", &venda[i]);

        lucro = (venda[i] / compra[i]) * 100;

        if(lucro < 10) lucro_menos_10++;
        else if(lucro >= 10 && lucro <= 20) lucro_entre_10_20++;
        else if(lucro > 20) lucro_mais_20++;

        printf("\n");
    }

    printf("Quantidade de mercadorias com menos de 10%% de lucro: %d", lucro_menos_10);
    printf("\nQuantidade de mercadorias com lucro entre 10%% e 20%%: %d", lucro_entre_10_20);
    printf("\nQuantidade de mercadorias com mais de 20%% de lucro: %d", lucro_mais_20);

    return 0;
}