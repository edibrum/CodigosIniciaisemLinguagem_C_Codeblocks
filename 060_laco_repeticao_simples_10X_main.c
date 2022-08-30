#include <stdio.h>
#include <stdlib.h>
/*LISTA 3
3) Leia o nome do usuário e escreva o nome dele na tela 10 vezes. */

int main()
{
    int n=0;
    char nome[40];

    /* Pede ao usuário que digite o nome: */
    printf("Digite seu nome completo (para espacos use '_': \n");
    scanf(" %s",nome);

    /* Mostra o nome do usuário 10 vezes: */
    for (int i=1;i<=10;i++)
    {
        n=n+1;
        printf("%d: %s \n",n,nome);
    }


    return 0;
}
