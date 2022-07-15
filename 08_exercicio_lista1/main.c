#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 8: Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média ponderada (as
notas tem pesos respectivos de 1, 2 e 3).*/

int main()
{
    float a,b,c,m;

    /* Pede para o usuário inserir a nota 1: */
    printf("Digite a nota 1: \n");
    scanf("%f",&a);

      /* Pede para o usuário inserir a nota 2: */
    printf("Digite a nota 2: \n");
    scanf("%f",&b);

      /* Pede para o usuário inserir a nota 3: */
    printf("Digite a nota 3: \n");
    scanf("%f",&c);

    /* Cálculo: */
    m=a*0.1+b*0.2+c*0.3;

    /*Exibe o resultado para o usuário: */
    printf("\n A media ponderada e: %.2f .\n \n",m);

    return 0;
}
