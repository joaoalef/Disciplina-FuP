#include <stdio.h>

/*
Construa um programa em C que leia vários números e informe quantos números
entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o algoritmo
deverá cessar sua execução.
*/

int main(){
    int entre_100_e_200 = 0;
    int num;

    do{
        printf("Digite um número: ");
        scanf("%d", &num);

        if(num > 100 && num < 200) entre_100_e_200++;
    }
        while(num != 0);

    printf("\nDentre os números digitados, apenas %d estavam entre 100 e 200.", entre_100_e_200);

    return 0;
}