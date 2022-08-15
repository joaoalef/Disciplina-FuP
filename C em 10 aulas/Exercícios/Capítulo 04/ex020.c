#include <stdio.h>

/*
Faça um programa que leia a matrícula e a média de 100 alunos.
Ordene da maior para a menor nota e imprima uma relação contendo todas as matrículas e médias
*/

int main(){
    int matricula[100];
    float media[100];
    int auxMat;
    float auxMedia;

    printf("Digite as matriculas dos 100 alunos em ordem:\n");
    for(int i=0; i<100; i++) scanf("%d", &matricula[i]);

    printf("Digite as médias dos 100 alunos em ordem:\n");
    for(int i=0; i<100; i++) scanf("%f", &media[i]);

    for(int i = 0; i < 100 - 1; i++){

        for(int j = i + 1; j < 100; j++){

            if(media[i] < media[j]){
                auxMedia = media[i];
                media[i] = media[j];
                media[j] = auxMedia;
                auxMat = matricula[i];
                matricula[i] = matricula[j];
                matricula[j] = auxMat;
            }
        }
    }

    printf("\nMatricula \t Média\n");
    for(int i = 0 ; i < 100; i++){
        printf("%d\t\t", matricula[i]);
        printf("%f\n", media[i]);
    }

    return 0;
}