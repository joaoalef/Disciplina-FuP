#include <stdio.h>

/*
Em uma universidade cada aluno possui os seguintes dados:
• Renda pessoal;
• Renda familiar;
• Total gasto com alimentação;
• Total gasto com outras despesas;

Faça um programa que imprima:

• A porcentagem dos alunos que gasta acima de R$200,00 com outras despesas.
• O número de alunos com renda pessoal maior que a renda familiar
  e a porcentagem gasta com alimentação e outras despesas em relação às rendas pessoal e familiar.
  
Obs.: O programa encerra quando se digita 0 para a renda pessoal
*/

int main(){
    char registro;

    printf("Deseja cadastrar um aluno <S / N>? ");
    scanf("%c", &registro);

    if(registro == 'S'){
        float PercentMais200 = 0, PercentGastosRendaP, PercentGastosRendaF;
        float alimentacao, despesas, GastosTotais;
        float rendap, rendaf;
        int qtd_alunos, RendaPMaior = 0;

        while(registro == 'S'){
            qtd_alunos++;
            
            printf("Digite sua renda pessoal: ");
            scanf("%f", &rendap);

            printf("Digite sua renda familiar: ");
            scanf("%f", &rendaf);

            printf("Digite o total gasto com alimentação: ");
            scanf("%f", &alimentacao);

            printf("Digite o total gasto com outras despesas: ");
            scanf("%f", &despesas);

            if(despesas > 200) PercentMais200++;
            if(rendap > rendaf) RendaPMaior++;

            GastosTotais = alimentacao + despesas;

            PercentGastosRendaP = (GastosTotais * 100) / rendap;
            PercentGastosRendaF = (GastosTotais * 100) / rendaf;

            printf("\nPorcentagem gasta com alimentação e outras despesas em relação à renda pessoal: %.1f%%", PercentGastosRendaP);
            printf("\nPorcentagem gasta com alimentação e outras despesas em relação à renda familar: %.1f%%", PercentGastosRendaF);

            printf("\n");

            printf("\nDeseja cadastrar um aluno <S / N>? ");
            getchar();
            scanf("%c", &registro);
        }

        PercentMais200 = (PercentMais200 * 100) / qtd_alunos;

        printf("\nPorcentagem dos alunos que gastam acima de R$200,00 com outras despesas: %.1f%%", PercentMais200);
        printf("\nNúmero de alunos com renda pessoal maior que a renda familiar: %d\n", RendaPMaior);

        if(registro == 'N') printf("\nPrograma encerrado.");
    }

    else printf("\nPrograma encerrado.");

    return 0;
}