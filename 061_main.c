#include <stdio.h>
#include <stdlib.h>
/*LISTA 3
4) Leia o nome de um usu�rio e um n�mero N e escreva o nome dele na tela N vezes. */

int main()
{
    int n=0,vezes;
    char nome[40];

    /* Pede ao usu�rio que digite o nome: */
    printf("Digite seu nome completo (para espacos use '_': \n");
    scanf(" %s",nome);

    /* Pede ao usu�rio que digite o numero de vezes: */
    printf("Digite o numero de vezes a imprimir o seu nome: \n");
    scanf("%d",&vezes);

    /* Mostra o nome do usu�rio 10 vezes: */
    for (int i=1; i<=vezes; i++)
    {
        n=n+1;
        printf("%d: %s \n",n,nome);
    }

    return 0;
}
