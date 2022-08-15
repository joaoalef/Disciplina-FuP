#include <stdio.h>

/*
Faça um programa que leia um vetor vet de 10 elementos e obtenha um vetor w
cujos componentes são os fatoriais dos respectivos componentes de vet
*/

int main(){
    int vet[10];
    int w[10];

    printf("---Digite os valores conjunto---\n");
    for(int i=0; i<10; i++){
        int valido = vet[i] > 1;

        do{
            printf("%d° valor: ", i + 1);
            scanf("%d", &vet[i]);

            valido = vet[i] > 1;

            if(valido) break;
            else{
                printf("O número precisa ser maior que 1, digite novamente.\n");
                printf("%d° valor: ", i + 1);
                scanf("%d", &vet[i]);

                valido = vet[i] > 1;
            }
        } while(!valido);
    }

    for(int i=0; i<10; i++){
        int fatorial = 1;

        for(int j=vet[i]; j>1; j--){
            
            if(vet[i] == 1){
                w[i] = 0;
                break;
            }

            fatorial *= j;

            w[i] = fatorial;
        }
    }

    printf("\nFatorial dos valores do conjunto informado:\n");
    for(int i=0; i<10; i++) printf("%d\n", w[i]);

    return 0;
}