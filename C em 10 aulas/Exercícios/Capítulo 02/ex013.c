 #include <stdio.h>

 /*
 Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota
da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou
"em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as
demais em prova final).
*/

int main(){
    char nome[50];
    float nota1;
    float nota2;

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    printf("Digite sua 1° nota: ");
    scanf("%f", &nota1);
    printf("Digite sua 2° nota: ");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;

    float aprovado = media >= 7;
    float reprovado = media < 3;
    float af = media >= 3 && media < 7;

    printf("\nNome do aluno: %s", nome);
    printf("\nNota 1: %.2f", nota1);
    printf("\nNota 2: %.2f", nota2);
    printf("\nMédia: %f", media);

    if(aprovado)
        printf("\nStatus: Aprovado");
    else if(reprovado)
        printf("\nStatus: Reprovado");
    else if(af)
        printf("Status: Aguardando AF");

    return 0;
}