#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*LISTA 3
18) Escreva um algoritmo que leia a quantidade de alunos em uma turma. Em seguida:
a. para cada aluno, leia a informação de suas 2 notas, calcule a média e informe se o
b. aluno está aprovado ou reprovado. O aluno está aprovado apenas se a sua média for maior ou igual a 6. */

int main()
{
    /* Para poder usar acentos e etc.:*/
    setlocale(LC_ALL, "Portuguese");

    /* Declara as variáveis: */
    int quant_alunos;
    float nota1,nota2,media;

    /* Pede ao usuário que digite as variáveis: */
    printf("Digite a quantidade de alunos:");
    scanf("%d",&quant_alunos);
    printf("\n ******************************** \n");

    /* Opera e mostra os resultados ao usuário: */
    for (int i=1;i<=quant_alunos;i++){
        printf("\n Digite a primeira nota d@ alun@ %d: ",i);
        scanf("%f",&nota1);
        printf("\n Digite a segunda nota d@ alun@ %d: ",i);
        scanf("%f",&nota2);

        media=(nota1+nota2)/2;

        if (media>=60.00){
        printf("\n O aluno %d está APROVADO com média: %.2f ",i,media);
        printf("\n ***************************** \n");
        }

        else{
        printf("\n O aluno %d está REPROVADO com média: %.2f ",i,media);
        printf("\n ***************************** \n");
        }
    }

    printf("Programa finalizado!");




    return 0;
}
