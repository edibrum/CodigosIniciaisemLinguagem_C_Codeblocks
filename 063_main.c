#include <stdio.h>
#include <stdlib.h>
/*LISTA 3
6) Leia a idade de 20 pessoas e exiba a m�dia das idades. */

int main()
{
    /*Cria as vari�veis: */
    int idade,total;

    /*Pede que o usu�rio digite os valores para as vari�veis de entrada e calcula: */
    for (int i=1;i<=20;i++)
    {
    printf("\n Digite a idade da PESSOA %d:  ",i);
    scanf("%d",&idade);
    total=total+idade;
    }

    /*Mostra o resultado: */
    printf("\n ************* \n IDADE MEDIA: %d. \n",(int)total/20);

    return 0;
}
