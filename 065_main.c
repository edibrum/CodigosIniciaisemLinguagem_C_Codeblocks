#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*LISTA 3
8) Leia o nome e a idade de 10 pessoas e exiba o nome da pessoa mais nova. */

int main()
{
    /*Cria as vari�veis: */
    int idade,novinha;
    char nome[20],novinhaname[20];

    /*Pede que o usu�rio digite as idades e os nomes: */
    for (int i=1;i<=3;i++)
    {
    printf("\n Digite o nome da PESSOA %d:  ",i);
    scanf("%s",nome);

    printf("\n Digite a idade da PESSOA %d:  ",i);
    scanf("%d",&idade);

        if (idade<=novinha)
        {
            strcpy(novinhaname,nome);
        }
    }

    /*Mostra quem � a pessoa mais jovem: */
    printf("\n ************* \n A pessoa mais jovem e: %s \n",novinhaname);

    return 0;
}
