#include <stdio.h>
#include <stdlib.h>
/*LISTA 3
7) Leia a idade de 20 pessoas e exiba quantas pessoas são maiores de idade. */

int main()
{
    /*Cria as variáveis: */
    int idade,maiores=0;

    /*Pede que o usuário digite as idades e contabiliza qunado é maior de idade: */
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

    /*Mostra quantas pessoas são maiores: */
    printf("\n ************* \n Sao %d pessoas maiores de idade. \n",maiores);

    return 0;
}
