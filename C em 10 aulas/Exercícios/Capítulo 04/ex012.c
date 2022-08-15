#include <stdio.h>

/*
Crie um programa para gerenciar um sistema de reservas de mesas em uma casa de espetáculo.

A casa possui 30 mesas de 5 lugares cada.
O programa deverá permitir que o usuário escolha o código de uma mesa (100 a 129)
e forneça a quantidade de lugares desejados.

O programa deverá informar se foi possível realizar a reserva e atualizar a reserva.
Se não for possível, o programa deverá emitir uma mensagem.
O programa deve terminar quando o usuário digitar o código 0 (zero)
para uma mesa ou quando todos os 150 lugaresestiverem ocupados.
*/

int main(){
    int lugares_disponiveis[30];
    int mesas[30];
    int aux = 100;
    int reservadas = 0;
    int resposta;

    for(int i=0; i<30; i++) lugares_disponiveis[i] = 5;

    for(int i=0; i<30; i++){
        mesas[i] = aux;

        aux++;

        if(aux == 130) break;
    }

    printf("Deseja fazer uma reserva? <1 - Sim | 0 - Não> ");
    scanf("%d", &resposta);

    while(resposta == 1 && reservadas <= 150){
        int mesa;
        int lugares;

        printf("\nDigite o número da mesa desejada: ");
        scanf("%d", &mesa);

        int mesa_valida = mesa >= 100 && mesa <= 129;

        if(mesa_valida){
            printf("Digite o número de lugares desejados: ");
            scanf("%d", &lugares);

            for(int i=0; i<30; i++){

                if(mesa == mesas[i]){
                    
                    if(lugares_disponiveis[i] - lugares >= 0){
                        printf("Lugares reservados na mesa.");

                        lugares_disponiveis[i] -= lugares;
                        reservadas += lugares;
                    }

                    else
                        printf("A mesa escolhida não possui a quantidade de lugares disponíveis.");
                }
            }
        }

        else if(!mesa_valida) printf("Mesa não encontrada.");

        printf("\n\nDeseja fazer uma reserva? <1 - Sim | 0 - Não> ");
        scanf("%d", &resposta);
    }

    if(resposta == 0) printf("\nPrograma encerrado.");

    return 0;
}