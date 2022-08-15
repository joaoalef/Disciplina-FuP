#include <stdio.h>

/*
Construa um programa que leia o percurso em quilómetros, o tipo do carro e
informe o consumo estimado de combustível, sabendo-se que um carro tipo A
faz 12 km com um litro de gasolina, um tipo B faz 9 km e o tipo C, 8 km por litro.
*/

int main(){
    int percurso;
    int consumo;
    char carro;

    printf("Digite o tipo de carro <A, B ou C>: ");
    scanf("%c", &carro);
    printf("Digite o percurso em quilômetros: ");
    scanf("%d", &percurso);

    switch(carro){
        case 'A':
            consumo = percurso * 12;
            printf("\nO consumo estimado de combústivel na viagem foi: %d km", consumo);
            break;
        case 'B':
            consumo = percurso * 9;
            printf("\nO consumo estimado de combústivel na viagem foi: %d km", consumo);
            break;
        case 'C':
            consumo = percurso * 8;
            printf("\nO consumo estimado de combústivel na viagem foi: %d km", consumo);
            break;
        default:
            printf("Tipo de carro inválido.");
    }

    return 0;
}