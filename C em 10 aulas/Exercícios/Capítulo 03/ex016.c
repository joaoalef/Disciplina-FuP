#include <stdio.h>

/*
Sabendo-se que a unidade lógica e aritmética calcula a divisão por meio de subtrações sucessivas,
criar um algoritmo que calcule e imprima o resto da divisão de números inteiros lidos.
Para isso, basta subtrair o divisor ao dividendo, sucessivamente,
até que o resultado seja menor do que o divisor. O número de subtrações
realizadas corresponde ao quociente inteiro e o valor restante da subtração corresponde ao resto.
Suponha que os números lidos sejam positivos e que o dividendo seja maior do que o divisor.
*/

int main(){
    int dividendo;
    int divisor;
    int subtracao;

    do{
        printf("Digite o dividendo: ");
        scanf("%d", &dividendo);

        printf("Digite o divisor: ");
        scanf("%d", &divisor);

        if(dividendo < 0 || divisor < 0 || dividendo < divisor) printf("Dividendo e divisor devem ser positivos e o dividendo deve ser maior que o divisor.\n\n");
        else if(dividendo < 0 || divisor < 0) printf("Tanto o dividendo como o divisor devem ser maior que 0.\n\n");
        else if(dividendo < divisor) printf("Dividendo deve ser maior que o divisor.\n\n");
    }
        while (dividendo < 0 || divisor < 0 || dividendo < divisor);

    subtracao = dividendo;

    while(subtracao > divisor) subtracao -= divisor;

    printf("Resto da divisão: %d", subtracao);

    return 0;
}