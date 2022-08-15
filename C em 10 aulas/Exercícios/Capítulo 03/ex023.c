#include <stdio.h>
#include <string.h>

/*
Crie um programa que leia um conjunto de informações (nome, sexo, idade, peso e altura)
dos atletas que participaram de uma olimpíada, e informar:

• a atleta do sexo feminino mais alta;
• o atleta do sexo masculino mais pesado;
• a média de idade dos atletas.

Obs.: Deverão se lidos dados dos atletas até que seja digitado o nome @ para um atleta.

Para resolver este exercício, consulte a aula 7 que aborda o tratamento de strings,
como comparação e atribuição de textos.
*/

int main(){
    char registro;

    printf("Deseja registrar um atleta <S / N>? ");
    scanf("%c", &registro);

    if(registro == 'S'){
        char nome[100], sexo, atleta_alta[100], atleta_pesado[100];
        float peso, altura, altof = 0, pesadom = 0, media_idade = 0;
        int idade;
        
        printf("\nDigite o nome do atleta: ");
        getchar();
        fgets(nome, 100, stdin);

        printf("Digite o sexo do atleta <M / F>: ");
        getchar();
        scanf("%c", &sexo);

        printf("Digite a idade do atleta (anos): ");
        scanf("%d", &idade);

        printf("Digite o peso do atleta (kg): ");
        scanf("%f", &peso);

        printf("Digite a altura do atleta (cm): ");
        scanf("%f", &altura);

        if(sexo == 'F'){
            if(altura > altof){
                strcpy(atleta_alta, nome);
            }
        }
        media_idade += idade;

        printf("%s", atleta_alta);

        /*• a atleta do sexo feminino mais alta;
        • o atleta do sexo masculino mais pesado;
        • a média de idade dos atletas.*/

    }

    else printf("\nPrograma encerrado.");

    return 0;
}