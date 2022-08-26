#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
EXERCÍCIO 9: Escreva um algoritmo que leia o número de identificação do aluno, 3 notas obtidas e calcule a média aritmética obtida pelo aluno.
Ao final informe se o aluno foi aprovado direto, ficou em recuperação ou foi reprovado por nota.*/

int main()
{
    int matricula,n1,n2,n3;
    float media;

    /*Pede ao usuário que digite os dados:*/
    printf("Digite o numero de identificacao do aluno: \n");
    scanf("%d",&matricula);

    printf("Digite a primeira nota (0 a 100): \n");
    scanf("%d",&n1);

    printf("Digite a segunda nota(0 a 100): \n");
    scanf("%d",&n2);

    printf("Digite a terceira nota(0 a 100): \n");
    scanf("%d",&n3);

    /*Cálculo da média:*/
    media=(n1+n2+n3)/3;

    /*Análise condicionada:*/
    if (media>=70.00)
        printf("O aluno foi APROVADO com nota %.2f.\n",media);
    else if (media>=40.00)
        printf("O aluno ficou de RECUPERACAO com nota %.2f. \n",media);
    else
        printf("O aluno foi REPROVADO com nota %.2f.\n",media);


    return 0;
}
