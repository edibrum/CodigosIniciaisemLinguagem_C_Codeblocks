#include <stdio.h>
#include <stdlib.h>
/*LISTA 3
7) Leia a idade de 20 pessoas e exiba quantas pessoas s�o maiores de idade. */

int main()
{
    /*Cria as vari�veis: */
    int idade,maiores=0;

    /*Pede que o usu�rio digite as idades e contabiliza qunado � maior de idade: */
    for (int i=1;i<=20;i++)
    {
    printf("\n Digite a idade da PESSOA %d:  ",i);
    scanf("%d",&idade);
        if (idade>=18)
        {
            maiores=maiores+1;
        } else {
            maiores=maiores;
            }
    }

    /*Mostra quantas pessoas s�o maiores: */
    printf("\n ************* \n Sao %d pessoas maiores de idade. \n",maiores);

    return 0;
}
