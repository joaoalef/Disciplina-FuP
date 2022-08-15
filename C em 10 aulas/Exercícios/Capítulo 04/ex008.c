#include <stdio.h>

int main(){
    float valor_compra[30];
    float valor_venda[30];
    int codigo[30];
    int quantidade[30];
    int resposta;

    for(int i=0; i<30; i++)
    {
        if(i > 0) printf("\n");

        printf("Digite o código do produto: ");
        scanf("%d", &codigo[i]);
        printf("Digite a quantidade desse mesmo produto: ");
        scanf("%d", &quantidade[i]);
        printf("Digite o valor de compra deste produto: ");
        scanf("%f", &valor_compra[i]);
        printf("Digite o valor de venda deste produto: ");
        scanf("%f", &valor_venda[i]);
    }

    printf("\n1 - Listar todos os produtos.");
    printf("\n2 - Procurar código de produto específico.");

    int valido;

    do{
        printf("\nDigite sua opção: ");
        scanf("%d", &resposta);  

        valido = resposta == 1 || resposta == 2;

        if(valido) break;
        else printf("\nOpção inválida. Tente novamente.");
    }  
        while(!valido);

    if(resposta == 1){
        printf("\nCodigo \t Quantidade \t Valor Compra \t Valor Venda \n");
        for(int i=0; i<30; i++){
            printf("%d\t", codigo[i]);
            printf("%d\t", quantidade[i]);
            printf("R$%.2f\t", valor_compra[i]);
            printf("R$%.2f\n", valor_venda[i]);
        }
    }

    else if(resposta == 2){
        int encontrado = 0;

        do{
            printf("\nDigite o código do produto: ");
            scanf("%d", &resposta);

            for(int i=0; i<30; i++)
                if(codigo[i] == resposta)
                    encontrado = 1;

            valido = encontrado == 1;

            if(!valido)
                printf("\nCódigo não encontrado, tente novamente.");

            else if(valido)
                for(int i=0; i<30; i++)
                    if(codigo[i] == resposta){
                        printf("\nCodigo \t Quantidade \t Valor Compra \t Valor Venda \n");
                        printf("%d\t", codigo[i]);
                        printf("%d\t", quantidade[i]);
                        printf("R$%.2f\t", valor_compra[i]);
                        printf("R$%.2f\n", valor_venda[i]);
                        break;
                    }
        }
            while(!valido);    
    }

    return 0;
}