#include <stdio.h>

/*
Crie uma estrutura representando uma hora.
Essa estrutura deve conter os campos hora, minuto e segundo.
Agora, escreva um programa que leia um vetor de cinco posições dessa estrutura e imprima a maior hora.
*/

typedef struct hora{
    int hora;
    int minuto;
    int segundo;
} hora;

void main(){
    hora horas[5];
    int maior_hora = 0;
    int maior_minuto = 0;
    int maior_segundo = 0;
    int maior;

    for(int i = 0; i < 5; i++){
        printf("Digite a hora: ");
        scanf("%d", &horas[i].hora);

        printf("Digite os minutos: ");
        scanf("%d", &horas[i].minuto);

        printf("Digite os segundos: ");
        scanf("%d", &horas[i].segundo);

        if(horas[i].hora > maior_hora){
            maior_hora = horas[i].hora;
            maior = i; 
        }

        else if(horas[i].hora == maior_hora){

            if(horas[i].minuto > maior_minuto){
                maior_hora = horas[i].hora;
                maior_minuto = horas[i].minuto;
                maior = i;
            }

            else if(horas[i].minuto == maior_minuto){

                if(horas[i].segundo >= maior_segundo){
                    maior_hora = horas[i].hora;
                    maior_segundo = horas[i].segundo;
                    maior = i;
                }
            }
        }

        printf("\n");
    }
    
    printf("A maior hora dentre as informadas é: %d horas, %d minutos e %d segundos.", horas[maior].hora, horas[maior].minuto, horas[maior].segundo);
}