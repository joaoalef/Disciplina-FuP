#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("Pense em um inteiro entre 1 e 1024.");
    printf("\nPensou? Então irei começar meus chutes.\n");

    int chute_maximo = 1024;
    int chute_minimo = 1;
    int tentativas = 0;
    int chute;
    int status;

    do{
        srand(time(NULL));
        chute = chute_minimo + rand() % (chute_maximo - chute_minimo);

        printf("\nMeu chute é: %d", chute);
        printf("\n1 - Chute menor que o valor.");
        printf("\n2 - Chute maior que o valor.");
        printf("\n3 - Chute igual o valor.");
        printf("\nDigite meu status: ");
        scanf("%d", &status);

        tentativas++;

        if(status == 1) chute_minimo = chute;
        else if(status == 2) chute_maximo = chute;
        else if(status == 3) printf("\nFinalmente acertei. No total foram %d tentativas.", tentativas);
    } while(status != 3);

    return 0;
}